// Code writen for Codility task
// FrogJmp
// Count minimal number of jumps from position X to Y

class FrogJmp {
    public int solution(int X, int Y, int D) {
        return (Y - X) % D == 0 ? (Y - X) / D : (Y - X) / D + 1;

    }
}