#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the head with color red
    glColor3f(1.0, 0.0, 0.0); // Red color
    glLineWidth(2.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0, 0.5); // Top
    glVertex2f(0.1, 0.4); // Right
    glVertex2f(0.0, 0.3); // Bottom
    glVertex2f(-0.1, 0.4); // Left
    glEnd();

    // Draw the body with color blue
    glColor3f(0.0, 0.0, 1.0); // Blue color
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.3); // Top of body
    glVertex2f(0.0, -0.3); // Bottom of body
    glEnd();

    // Draw the arms with color green
    glColor3f(0.0, 1.0, 0.0); // Green color
    glBegin(GL_LINES);
    // Left arm
    glVertex2f(0.0, 0.1); // Shoulder
    glVertex2f(-0.3, 0.0); // Hand
    // Right arm
    glVertex2f(0.0, 0.1); // Shoulder
    glVertex2f(0.3, 0.0); // Hand
    glEnd();

    // Draw the legs with color yellow
    glColor3f(1.0, 1.0, 0.0); // Yellow color
    glBegin(GL_LINES);
    // Left leg
    glVertex2f(0.0, -0.3); // Hip
    glVertex2f(-0.2, -0.6); // Foot
    // Right leg
    glVertex2f(0.0, -0.3); // Hip
    glVertex2f(0.2, -0.6); // Foot
    glEnd();

    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Set clear color to white
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Set orthographic projection
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Single buffer and RGB color
    glutInitWindowSize(500, 500); // Set window size
    glutCreateWindow("OpenGL Stick Figure Example"); // Create window with title
    init(); // Initialize OpenGL settings
    glutDisplayFunc(display); // Register display callback function
    glutMainLoop(); // Enter the main event loop
    return 0;
}
