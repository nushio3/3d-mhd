
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_294 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_91_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_91_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_91_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_91_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_91_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (30)][iy + (40)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (40)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (30)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_92_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_92_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_92_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_92_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_92_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (30)][iy + (40)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (40)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (30)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (-6, 24, -6, 34, 258, 506, Rsc1, 7, 7, -257, Rsc0, 7,
      7, -257, Rsc1, 8, 7, -257, Rsc1, 6, 7, -257, Rsc1, 7, 8, -257, Rsc1, 7, 6,
      -257, Rsc1, 7, 7, -256, Rsc1, 7, 7, -258, 8, 8, 8);

  }
}

void
Formura_internal_295 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (-6, 24, -6, 34, 258, 506, Rsc0, 7, 7, -257, Rsc1, 7,
      7, -257, Rsc0, 8, 7, -257, Rsc0, 6, 7, -257, Rsc0, 7, 8, -257, Rsc0, 7, 6,
      -257, Rsc0, 7, 7, -256, Rsc0, 7, 7, -258, 8, 8, 8);

  }
}

void
Formura_internal_296 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 64; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          U[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 64; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          V[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (0, 27, 0, 38, 2, 252, 38, 27, -1, 38, 27, -1, 39, 27,
      -1, 37, 27, -1, 38, 28, -1, 38, 26, -1, 38, 27, 0, 38, 27, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_79_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_79_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_79_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_79_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_79_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_297 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 27, 0, 38, 2, 252, 38, 27, -1, 38, 27, -1, 39, 27,
      -1, 37, 27, -1, 38, 28, -1, 38, 26, -1, 38, 27, 0, 38, 27, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_80_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_80_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_80_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_80_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_80_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_298 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_79_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_80_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 25, 0, 36, 2, 254, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_81_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_81_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_81_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_81_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_81_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_299 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 25, 0, 36, 2, 254, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_82_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_82_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_82_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_82_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_82_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_30 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 0, 32, 0, 256, Rsc0, -1, 1, 1, Rsc1, -1, 1, 1,
      Rsc0, 0, 1, 1, Rsc0, -2, 1, 1, Rsc0, -1, 2, 1, Rsc0, -1, 0, 1, Rsc0, -1,
      1, 2, Rsc0, -1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (30)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (30)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (30)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (30)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_86_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_86_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_86_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (30)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_86_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (30)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_86_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_86_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_86_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_86_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_86_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_86_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_300 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_81_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_82_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 23, 0, 34, 2, 256, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_83_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (32)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_83_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_83_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_83_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (32)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_83_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (32)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_301 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 23, 0, 34, 2, 256, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_84_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (32)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_84_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_84_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_84_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (32)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_84_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (32)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_302 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_83_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_84_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 21, 0, 32, 2, 258, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_85_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (19)][iy + (30)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_85_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (19)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_85_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (19)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_85_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (30)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_85_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (30)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_303 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 21, 0, 32, 2, 258, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_86_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (19)][iy + (30)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_86_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (19)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_86_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (19)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_86_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (30)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_86_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (30)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_304 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_85_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_86_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 19, 0, 30, 2, 260, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_87_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (17)][iy + (28)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_87_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (17)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_87_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (17)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_87_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (28)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_87_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (28)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_305 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 19, 0, 30, 2, 260, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_88_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (28)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_88_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_88_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_88_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (28)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_88_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (28)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_306 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_87_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_88_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 17, 0, 28, 2, 262, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_89_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (26)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_89_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_89_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_89_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (26)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_89_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (26)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_307 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 17, 0, 28, 2, 262, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_90_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (26)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_90_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_90_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_90_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (26)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_90_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (26)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_308 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_89_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_90_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 15, 0, 26, 2, 264, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_91_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (24)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_91_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_91_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_91_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (24)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_91_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (24)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_309 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 15, 0, 26, 2, 264, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_92_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (24)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_92_r_2_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_1_0_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_92_r_2_1_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_92_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (24)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_2_1_0_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_92_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (24)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_31 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 0, 30, 0, 254, Rsc2, -1, 1, 1, Rsc3, -1, 1, 1,
      Rsc2, 0, 1, 1, Rsc2, -2, 1, 1, Rsc2, -1, 2, 1, Rsc2, -1, 0, 1, Rsc2, -1,
      1, 2, Rsc2, -1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (28)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (28)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_87_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_87_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_87_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_87_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_87_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_87_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_87_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_87_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_87_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_87_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_310 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_91_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_1_0_Recv.
            Ridge_0_0_m1_Om_92_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_2_1_1_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (45, 58, 34, 58, -6, 258, Rsc1, -44, -33, 7, Rsc0, -44,
      -33, 7, Rsc1, -43, -33, 7, Rsc1, -45, -33, 7, Rsc1, -44, -32, 7, Rsc1,
      -44, -34, 7, Rsc1, -44, -33, 8, Rsc1, -44, -33, 6, 8, 8, 8);

  }
}

void
Formura_internal_311 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (45, 58, 34, 58, -6, 258, Rsc0, -44, -33, 7, Rsc1, -44,
      -33, 7, Rsc0, -43, -33, 7, Rsc0, -45, -33, 7, Rsc0, -44, -32, 7, Rsc0,
      -44, -34, 7, Rsc0, -44, -33, 8, Rsc0, -44, -33, 6, 8, 8, 8);

  }
}

void
Formura_internal_312 ()
{
#pragma omp parallel
  {
    Formura_subroutine_4 (0, 21, 0, 38, 2, 252, 17, 27, -1, 17, 27, -1, 18, 27,
      -1, 16, 27, -1, 17, 28, -1, 17, 26, -1, 17, 27, 0, 17, 27, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_79_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_79_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_313 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 21, 0, 38, 2, 252, 17, 27, -1, 17, 27, -1, 18, 27,
      -1, 16, 27, -1, 17, 28, -1, 17, 26, -1, 17, 27, 0, 17, 27, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_80_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_80_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_314 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_79_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_79_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (21)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (21)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_80_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_80_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (21)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (21)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 21, 0, 36, 2, 254, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_81_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_81_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_315 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 21, 0, 36, 2, 254, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_82_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_82_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_316 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_81_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_81_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (21)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (21)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_82_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_82_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (21)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (21)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 21, 0, 34, 2, 256, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_83_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (32)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_83_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (32)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}
