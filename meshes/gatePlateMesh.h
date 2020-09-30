// license:GPLv3+
// Ported at: VisualPinball.Resources/Meshes/GatePlate.cs

const unsigned int gatePlateNumVertices=70;
const unsigned int gatePlateNumIndices=156;
const Vertex3D_NoTex2 gatePlateMesh[70]=
{
{ 0.218057f,-0.005280f,-0.350277f, -0.000000f,-1.000000f,-0.000000f, 0.598837f,0.899413f},
{ -0.235543f,-0.005280f,-0.338377f, -0.000000f,-1.000000f,-0.000000f, 0.912791f,0.876158f},
{ -0.218743f,-0.005280f,-0.350277f, -0.000000f,-1.000000f,-0.000000f, 0.901163f,0.899413f},
{ 0.234857f,-0.005280f,-0.338377f, -0.000000f,-1.000000f,-0.000000f, 0.587209f,0.876158f},
{ 0.218057f,0.004720f,-0.350277f, 0.303300f,0.000000f,-0.952900f, 0.000000f,0.100587f},
{ 0.234857f,0.004720f,-0.338377f, 0.831900f,0.000000f,-0.555000f, 0.010770f,0.100587f},
{ 0.234857f,-0.005280f,-0.338377f, 0.831900f,0.000000f,-0.555000f, 0.010770f,0.119566f},
{ 0.218057f,-0.005280f,-0.350277f, 0.303300f,0.000000f,-0.952900f, 0.000000f,0.119566f},
{ -0.218743f,0.004720f,-0.350277f, 0.000000f,1.000000f,0.000000f, 0.098837f,0.899413f},
{ -0.235543f,0.004720f,-0.338377f, 0.000000f,1.000000f,0.000000f, 0.087209f,0.876158f},
{ 0.218057f,0.004720f,-0.350277f, 0.000000f,1.000000f,0.000000f, 0.401163f,0.899413f},
{ 0.234857f,0.004720f,-0.338377f, 0.000000f,1.000000f,0.000000f, 0.412791f,0.876158f},
{ -0.218743f,-0.005280f,-0.350277f, -0.303300f,0.000000f,-0.952900f, 0.784302f,0.119566f},
{ -0.235543f,-0.005280f,-0.338377f, -0.831900f,0.000000f,-0.555000f, 0.773533f,0.119566f},
{ -0.235543f,0.004720f,-0.338377f, -0.831900f,0.000000f,-0.555000f, 0.773533f,0.100587f},
{ -0.218743f,0.004720f,-0.350277f, -0.303300f,0.000000f,-0.952900f, 0.784302f,0.100587f},
{ 0.218057f,-0.005280f,-0.350277f, 0.303300f,0.000000f,-0.952900f, 1.000000f,0.119566f},
{ 0.218057f,0.004720f,-0.350277f, 0.303300f,0.000000f,-0.952900f, 1.000000f,0.100587f},
{ 0.302057f,-0.005280f,-0.005177f, 1.000000f,0.000000f,-0.000000f, 0.229298f,0.119566f},
{ 0.302057f,-0.005280f,-0.040877f, 0.993800f,0.000000f,-0.110800f, 0.212235f,0.119566f},
{ 0.302057f,0.004720f,-0.040877f, 0.993800f,0.000000f,-0.110800f, 0.212235f,0.100587f},
{ -0.302743f,-0.005280f,-0.040877f, -0.993800f,0.000000f,-0.110800f, 0.572067f,0.119566f},
{ -0.302743f,-0.005280f,-0.005177f, -1.000000f,0.000000f,-0.000000f, 0.555026f,0.119566f},
{ -0.302743f,0.004720f,-0.005177f, -1.000000f,0.000000f,-0.000000f, 0.555026f,0.100587f},
{ -0.302743f,0.004720f,-0.040877f, -0.993800f,0.000000f,-0.110800f, 0.572067f,0.100587f},
{ -0.302743f,-0.005280f,-0.040877f, -0.000000f,-1.000000f,-0.000000f, 0.959302f,0.294762f},
{ 0.302057f,-0.005280f,-0.040877f, -0.000000f,-1.000000f,-0.000000f, 0.540698f,0.294762f},
{ -0.302743f,-0.005280f,-0.005177f, -0.000000f,-1.000000f,-0.000000f, 0.959302f,0.224995f},
{ -0.302743f,0.004720f,-0.040877f, 0.000000f,1.000000f,0.000000f, 0.040698f,0.294762f},
{ 0.302057f,0.004720f,-0.040877f, 0.000000f,1.000000f,0.000000f, 0.459302f,0.294762f},
{ -0.302743f,0.004720f,-0.005177f, 0.000000f,1.000000f,0.000000f, 0.040698f,0.224995f},
{ 0.302057f,0.004720f,0.006723f, -0.000000f,0.000000f,1.000000f, 0.259746f,0.100587f},
{ -0.302743f,0.004720f,0.006723f, -0.000000f,0.000000f,1.000000f, 0.524367f,0.100587f},
{ -0.302743f,-0.005280f,0.006723f, -0.000000f,0.000000f,1.000000f, 0.524367f,0.119566f},
{ 0.302057f,-0.005280f,0.006723f, -0.000000f,0.000000f,1.000000f, 0.259746f,0.119566f},
{ 0.302057f,0.004720f,-0.005177f, 1.000000f,0.000000f,-0.000000f, 0.229298f,0.100587f},
{ 0.302057f,-0.005280f,-0.005177f, -0.000000f,-1.000000f,-0.000000f, 0.540698f,0.224995f},
{ 0.302057f,0.004720f,-0.005177f, 0.000000f,1.000000f,0.000000f, 0.459302f,0.224995f},
{ -0.361543f,0.004720f,-0.005177f, -1.000000f,0.000000f,-0.000000f, 0.542241f,0.100587f},
{ -0.361543f,-0.005280f,-0.005177f, -1.000000f,0.000000f,-0.000000f, 0.542241f,0.119566f},
{ -0.361543f,0.004720f,0.006723f, -1.000000f,0.000000f,-0.000000f, 0.537291f,0.100587f},
{ -0.361543f,-0.005280f,0.006723f, -1.000000f,0.000000f,-0.000000f, 0.537291f,0.119566f},
{ -0.302743f,0.004720f,0.006723f, 0.000000f,1.000000f,0.000000f, 0.040698f,0.201739f},
{ 0.302057f,0.004720f,0.006723f, 0.000000f,1.000000f,0.000000f, 0.459302f,0.201739f},
{ 0.360857f,-0.005280f,-0.005177f, 1.000000f,0.000000f,-0.000000f, 0.242036f,0.119566f},
{ 0.360857f,0.004720f,-0.005177f, 1.000000f,0.000000f,-0.000000f, 0.242036f,0.100587f},
{ 0.360857f,-0.005280f,0.006723f, 1.000000f,0.000000f,-0.000000f, 0.246821f,0.119566f},
{ 0.360857f,0.004720f,0.006723f, 1.000000f,0.000000f,-0.000000f, 0.246821f,0.100587f},
{ -0.302743f,-0.005280f,0.006723f, -0.000000f,-1.000000f,-0.000000f, 0.959302f,0.201739f},
{ 0.302057f,-0.005280f,0.006723f, -0.000000f,-1.000000f,-0.000000f, 0.540698f,0.201739f},
{ -0.361543f,-0.005280f,0.006723f, -0.000000f,-1.000000f,-0.000000f, 1.000000f,0.201739f},
{ -0.361543f,-0.005280f,-0.005177f, -0.000000f,-1.000000f,-0.000000f, 1.000000f,0.224995f},
{ -0.302743f,0.004720f,-0.005177f, 0.000000f,0.000000f,-1.000000f, 0.555026f,0.100587f},
{ -0.302743f,-0.005280f,-0.005177f, 0.000000f,0.000000f,-1.000000f, 0.555026f,0.119566f},
{ -0.361543f,0.004720f,-0.005177f, 0.000000f,0.000000f,-1.000000f, 0.542241f,0.100587f},
{ -0.361543f,-0.005280f,-0.005177f, 0.000000f,0.000000f,-1.000000f, 0.542241f,0.119566f},
{ -0.361543f,0.004720f,0.006723f, 0.000000f,1.000000f,0.000000f, 0.000000f,0.201739f},
{ -0.361543f,0.004720f,-0.005177f, 0.000000f,1.000000f,0.000000f, 0.000000f,0.224995f},
{ -0.361543f,-0.005280f,0.006723f, -0.000000f,0.000000f,1.000000f, 0.537291f,0.119566f},
{ -0.361543f,0.004720f,0.006723f, -0.000000f,0.000000f,1.000000f, 0.537291f,0.100587f},
{ 0.302057f,-0.005280f,-0.005177f, 0.000000f,0.000000f,-1.000000f, 0.229298f,0.119566f},
{ 0.302057f,0.004720f,-0.005177f, 0.000000f,0.000000f,-1.000000f, 0.229298f,0.100587f},
{ 0.360857f,-0.005280f,-0.005177f, 0.000000f,0.000000f,-1.000000f, 0.242036f,0.119566f},
{ 0.360857f,0.004720f,-0.005177f, 0.000000f,0.000000f,-1.000000f, 0.242036f,0.100587f},
{ 0.360857f,-0.005280f,-0.005177f, -0.000000f,-1.000000f,-0.000000f, 0.500000f,0.224995f},
{ 0.360857f,-0.005280f,0.006723f, -0.000000f,-1.000000f,-0.000000f, 0.500000f,0.201739f},
{ 0.360857f,0.004720f,-0.005177f, 0.000000f,1.000000f,0.000000f, 0.500000f,0.224995f},
{ 0.360857f,0.004720f,0.006723f, 0.000000f,1.000000f,0.000000f, 0.500000f,0.201739f},
{ 0.360857f,0.004720f,0.006723f, -0.000000f,0.000000f,1.000000f, 0.246821f,0.100587f},
{ 0.360857f,-0.005280f,0.006723f, -0.000000f,0.000000f,1.000000f, 0.246821f,0.119566f}
};

const WORD gatePlateIndices[156]=
{
	38, 39, 40,
	40, 39, 41,
	0, 1, 2,
	1, 0, 3,
	1, 3, 25,
	25, 3, 26,
	27, 25, 26,
	36, 27, 26,
	51, 27, 50,
	27, 48, 50,
	27, 36, 48,
	48, 36, 49,
	49, 36, 64,
	65, 49, 64,
	4, 5, 6,
	6, 7, 4,
	6, 5, 19,
	19, 5, 20,
	18, 19, 20,
	35, 18, 20,
	8, 9, 10,
	11, 10, 9,
	11, 9, 28,
	11, 28, 29,
	28, 30, 29,
	30, 37, 29,
	56, 30, 57,
	42, 30, 56,
	30, 42, 37,
	37, 42, 43,
	37, 43, 66,
	66, 43, 67,
	12, 13, 14,
	14, 15, 12,
	16, 12, 15,
	15, 17, 16,
	14, 13, 24,
	24, 13, 21,
	21, 23, 24,
	21, 22, 23,
	31, 32, 33,
	33, 32, 58,
	58, 32, 59,
	33, 34, 31,
	31, 34, 68,
	68, 34, 69,
	44, 45, 46,
	46, 45, 47,
	52, 53, 54,
	54, 53, 55,
	60, 61, 62,
	62, 61, 63
};
