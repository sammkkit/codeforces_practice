import pygame
import math

# Initialize pygame
pygame.init()

# Screen settings
WIDTH, HEIGHT = 600, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Bouncing Ball in Hexagon")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)

# Hexagon parameters
HEX_RADIUS = 200
HEX_CENTER = (WIDTH // 2, HEIGHT // 2)
HEX_POINTS = [
    (HEX_CENTER[0] + HEX_RADIUS * math.cos(math.radians(angle)),
     HEX_CENTER[1] + HEX_RADIUS * math.sin(math.radians(angle)))
    for angle in range(0, 360, 60)
]

# Ball settings
BALL_RADIUS = 10
ball_x, ball_y = HEX_CENTER
ball_dx, ball_dy = 3, 2  # Velocity

# Function to check collision with hexagon edges
def check_collision(x, y, dx, dy):
    for i in range(len(HEX_POINTS)):
        p1 = HEX_POINTS[i]
        p2 = HEX_POINTS[(i + 1) % len(HEX_POINTS)]

        # Edge vector
        edge_dx, edge_dy = p2[0] - p1[0], p2[1] - p1[1]

        # Normal vector (perpendicular)
        normal_x, normal_y = -edge_dy, edge_dx
        normal_length = math.sqrt(normal_x**2 + normal_y**2)
        normal_x /= normal_length
        normal_y /= normal_length

        # Vector from edge to ball
        ball_vec_x, ball_vec_y = x - p1[0], y - p1[1]

        # Distance from ball to edge
        distance = ball_vec_x * normal_x + ball_vec_y * normal_y

        if distance < BALL_RADIUS:
            # Reflect ball velocity
            dot_product = dx * normal_x + dy * normal_y
            dx -= 2 * dot_product * normal_x
            dy -= 2 * dot_product * normal_y
            return dx, dy

    return dx, dy

# Game loop
running = True
clock = pygame.time.Clock()

while running:
    screen.fill(WHITE)
    
    # Draw hexagon
    pygame.draw.polygon(screen, BLACK, HEX_POINTS, 3)
    
    # Update ball position
    ball_x += ball_dx
    ball_y += ball_dy

    # Check for collisions
    ball_dx, ball_dy = check_collision(ball_x, ball_y, ball_dx, ball_dy)

    # Draw ball
    pygame.draw.circle(screen, RED, (int(ball_x), int(ball_y)), BALL_RADIUS)

    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    pygame.display.flip()
    clock.tick(60)  # 60 FPS

pygame.quit()
