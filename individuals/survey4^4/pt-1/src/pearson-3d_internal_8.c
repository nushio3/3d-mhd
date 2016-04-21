
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_213 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 16, 0, 27, 0, 250, Rsc3, 1, 1, 1, Rsc2, 1, 1, 1,
      Rsc3, 2, 1, 1, Rsc3, 0, 1, 1, Rsc3, 1, 2, 1, Rsc3, 1, 0, 1, Rsc3, 1, 1, 2,
      Rsc3, 1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_m1_Om_92_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (25)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_92_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_m1_0_Om_92_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_m1_Om_92_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_m1_Om_92_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_92_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_92_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_0_0_Om_92_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_1_Send.
            Ridge_m1_0_0_Om_92_r_2_1_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_92_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_m1_Om_92_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_92_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_92_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_92_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_1_Send.
            Ridge_0_m1_0_Om_92_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_92_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_0_m1_Om_92_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_92_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_1_0_Send.
            Ridge_0_0_m1_Om_92_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_214 ()
{
#pragma omp parallel
  {
    Formura_subroutine_3 (46, 60, 35, 60, 258, 506, Rsc1, -45, -34, -257, Rsc0,
      -45, -34, -257, Rsc1, -44, -34, -257, Rsc1, -46, -34, -257, Rsc1, -45,
      -33, -257, Rsc1, -45, -35, -257, Rsc1, -45, -34, -256, Rsc1, -45, -34,
      -258, 8, 8, 8);

  }
}

void
Formura_internal_215 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (46, 60, 35, 60, 258, 506, Rsc0, -45, -34, -257, Rsc1,
      -45, -34, -257, Rsc0, -44, -34, -257, Rsc0, -46, -34, -257, Rsc0, -45,
      -33, -257, Rsc0, -45, -35, -257, Rsc0, -45, -34, -256, Rsc0, -45, -34,
      -258, 8, 8, 8);

  }
}

void
Formura_internal_216 ()
{
#pragma omp parallel
  {
    Formura_subroutine_4 (0, 22, 0, 39, 0, 262, 17, 28, 251, 17, 28, 251, 18,
      28, 251, 16, 28, 251, 17, 29, 251, 17, 27, 251, 17, 28, 252, 17, 28, 250,
      Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_79_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (37)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_79_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (37)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_79_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (37)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_79_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (37)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_79_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (37)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_79_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (37)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_79_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_79_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_79_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_79_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_217 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 22, 0, 39, 0, 262, 17, 28, 251, 17, 28, 251, 18,
      28, 251, 16, 28, 251, 17, 29, 251, 17, 27, 251, 17, 28, 252, 17, 28, 250,
      Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_80_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (37)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_80_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (37)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_80_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (37)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_80_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (37)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_80_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (37)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_80_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (37)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_80_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_80_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_80_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_80_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_218 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 37, 0, 260, Rsc0, 1, 1, 1, Rsc1, 1, 1, 1,
      Rsc0, 2, 1, 1, Rsc0, 0, 1, 1, Rsc0, 1, 2, 1, Rsc0, 1, 0, 1, Rsc0, 1, 1, 2,
      Rsc0, 1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_81_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_81_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_81_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_81_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_81_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_81_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_81_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_81_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_81_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_81_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_219 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 37, 0, 260, Rsc1, 1, 1, 1, Rsc0, 1, 1, 1,
      Rsc1, 2, 1, 1, Rsc1, 0, 1, 1, Rsc1, 1, 2, 1, Rsc1, 1, 0, 1, Rsc1, 1, 1, 2,
      Rsc1, 1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_82_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (35)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_82_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (35)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_82_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_82_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_82_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_82_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_82_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_82_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_82_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_82_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_22 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (10, 24, 10, 35, 10, 258, Rsc0, -9, -9, -9, Rsc1, -9,
      -9, -9, Rsc0, -8, -9, -9, Rsc0, -10, -9, -9, Rsc0, -9, -8, -9, Rsc0, -9,
      -10, -9, Rsc0, -9, -9, -8, Rsc0, -9, -9, -10, -8, -8, -8);

  }
}

void
Formura_internal_220 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 35, 0, 258, Rsc3, 1, 1, 1, Rsc2, 1, 1, 1,
      Rsc3, 2, 1, 1, Rsc3, 0, 1, 1, Rsc3, 1, 2, 1, Rsc3, 1, 0, 1, Rsc3, 1, 1, 2,
      Rsc3, 1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_83_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_83_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_83_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_83_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_83_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_83_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_83_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_83_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_83_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_83_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_221 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 35, 0, 258, Rsc2, 1, 1, 1, Rsc3, 1, 1, 1,
      Rsc2, 2, 1, 1, Rsc2, 0, 1, 1, Rsc2, 1, 2, 1, Rsc2, 1, 0, 1, Rsc2, 1, 1, 2,
      Rsc2, 1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_84_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_84_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_84_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_84_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_84_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_84_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_84_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_84_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_84_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_84_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_222 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 33, 0, 256, Rsc1, 1, 1, 1, Rsc0, 1, 1, 1,
      Rsc1, 2, 1, 1, Rsc1, 0, 1, 1, Rsc1, 1, 2, 1, Rsc1, 1, 0, 1, Rsc1, 1, 1, 2,
      Rsc1, 1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_85_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_85_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_85_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_85_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_85_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_85_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_85_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_85_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_85_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_85_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_223 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 33, 0, 256, Rsc0, 1, 1, 1, Rsc1, 1, 1, 1,
      Rsc0, 2, 1, 1, Rsc0, 0, 1, 1, Rsc0, 1, 2, 1, Rsc0, 1, 0, 1, Rsc0, 1, 1, 2,
      Rsc0, 1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_86_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_86_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_86_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_86_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_86_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_86_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_86_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_86_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_86_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_86_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_224 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 31, 0, 254, Rsc2, 1, 1, 1, Rsc3, 1, 1, 1,
      Rsc2, 2, 1, 1, Rsc2, 0, 1, 1, Rsc2, 1, 2, 1, Rsc2, 1, 0, 1, Rsc2, 1, 1, 2,
      Rsc2, 1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_87_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_87_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_87_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_87_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_87_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_87_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_87_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_87_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_87_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_87_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_225 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 31, 0, 254, Rsc3, 1, 1, 1, Rsc2, 1, 1, 1,
      Rsc3, 2, 1, 1, Rsc3, 0, 1, 1, Rsc3, 1, 2, 1, Rsc3, 1, 0, 1, Rsc3, 1, 1, 2,
      Rsc3, 1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_88_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_88_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_88_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_88_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_88_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_88_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_88_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_88_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_88_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_88_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_226 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_2_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 29, 0, 252, Rsc0, 1, 1, 1, Rsc1, 1, 1, 1,
      Rsc0, 2, 1, 1, Rsc0, 0, 1, 1, Rsc0, 1, 2, 1, Rsc0, 1, 0, 1, Rsc0, 1, 1, 2,
      Rsc0, 1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_89_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_89_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_89_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_89_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_89_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_89_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_89_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_89_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_89_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_89_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_227 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 29, 0, 252, Rsc1, 1, 1, 1, Rsc0, 1, 1, 1,
      Rsc1, 2, 1, 1, Rsc1, 0, 1, 1, Rsc1, 1, 2, 1, Rsc1, 1, 0, 1, Rsc1, 1, 1, 2,
      Rsc1, 1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_m1_Om_90_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_90_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_90_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_90_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_0_0_1_Send.
            Ridge_0_m1_0_Om_90_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_m1_0_src_1_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_90_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_90_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_90_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_0_1_0_Send.
            Ridge_0_0_m1_Om_90_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_90_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_1_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_1_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}
