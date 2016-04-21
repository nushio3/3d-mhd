
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_374 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_91_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_91_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (21)][iy + (0)][iz + (264)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_91_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_91_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (21)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_91_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_91_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (21)][iy + (40)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_91_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_91_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (21)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_91_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_91_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (21)][iy + (40)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (21)][iy + (2)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (21)][iy + (40)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (21)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_92_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_92_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (21)][iy + (0)][iz + (264)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_92_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_92_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (21)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_92_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_92_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (21)][iy + (40)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_92_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_92_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (21)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_92_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_92_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (21)][iy + (40)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (21)][iy + (2)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (21)][iy + (40)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (21)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (24, 45, -6, 34, -6, 258, Rsc1, -23, 7, 7, Rsc0, -23,
      7, 7, Rsc1, -22, 7, 7, Rsc1, -24, 7, 7, Rsc1, -23, 8, 7, Rsc1, -23, 6, 7,
      Rsc1, -23, 7, 8, Rsc1, -23, 7, 6, 8, 8, 8);

  }
}

void
Formura_internal_375 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (24, 45, -6, 34, -6, 258, Rsc0, -23, 7, 7, Rsc1, -23,
      7, 7, Rsc0, -22, 7, 7, Rsc0, -24, 7, 7, Rsc0, -23, 8, 7, Rsc0, -23, 6, 7,
      Rsc0, -23, 7, 8, Rsc0, -23, 7, 6, 8, 8, 8);

  }
}

void
Formura_internal_376 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          U[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          V[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (2, 18, 2, 28, 2, 252, -1, -1, -1, -1, -1, -1, 0, -1,
      -1, -2, -1, -1, -1, 0, -1, -1, -2, -1, -1, -1, 0, -1, -1, -2, Rsc0);

  }
}

void
Formura_internal_377 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 18, 2, 28, 2, 252, -1, -1, -1, -1, -1, -1, 0, -1,
      -1, -2, -1, -1, -1, 0, -1, -1, -2, -1, -1, -1, 0, -1, -1, -2, Rsc1);

  }
}

void
Formura_internal_378 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_Om_79_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_79_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_79_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_79_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_79_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (252)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_79_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (252)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_79_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_79_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Facet_m1_0_0_src_2_0_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_79_r_2_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_79_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_79_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_0_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (28)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_0_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (28)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (18)][iy + (28)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (18)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_1_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_Om_80_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_80_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_80_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_80_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_80_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (252)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_80_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (252)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_80_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_80_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Facet_m1_0_0_src_2_0_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_80_r_2_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_80_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_80_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_0_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (28)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_0_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (28)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (18)][iy + (28)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (18)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_1_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 20, 2, 30, 2, 254, Rsc0, -1, -1, -1, Rsc1, -1, -1,
      -1, Rsc0, 0, -1, -1, Rsc0, -2, -1, -1, Rsc0, -1, 0, -1, Rsc0, -1, -2, -1,
      Rsc0, -1, -1, 0, Rsc0, -1, -1, -2, Rsc3);

  }
}

void
Formura_internal_379 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 20, 2, 30, 2, 254, Rsc1, -1, -1, -1, Rsc0, -1, -1,
      -1, Rsc1, 0, -1, -1, Rsc1, -2, -1, -1, Rsc1, -1, 0, -1, Rsc1, -1, -2, -1,
      Rsc1, -1, -1, 0, Rsc1, -1, -1, -2, Rsc2);

  }
}

void
Formura_internal_38 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (23, 44, 10, 34, 10, 258, Rsc0, -22, -9, -9, Rsc1, -22,
      -9, -9, Rsc0, -21, -9, -9, Rsc0, -23, -9, -9, Rsc0, -22, -8, -9, Rsc0,
      -22, -10, -9, Rsc0, -22, -9, -8, Rsc0, -22, -9, -10, -8, -8, -8);

  }
}

void
Formura_internal_380 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_Om_81_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_81_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_81_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_81_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_81_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (254)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_81_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (254)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_81_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_81_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (2)] =
            Facet_m1_0_0_src_2_0_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_81_r_2_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_81_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_81_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_0_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (30)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_0_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (30)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (20)][iy + (30)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (20)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_1_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_Om_82_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_82_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_82_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_82_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_82_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (254)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_82_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (254)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_82_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_82_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (2)] =
            Facet_m1_0_0_src_2_0_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_82_r_2_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_82_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_82_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_0_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (30)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_0_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (30)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (20)][iy + (30)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (20)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_1_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 22, 2, 32, 2, 256, Rsc3, -1, -1, -1, Rsc2, -1, -1,
      -1, Rsc3, 0, -1, -1, Rsc3, -2, -1, -1, Rsc3, -1, 0, -1, Rsc3, -1, -2, -1,
      Rsc3, -1, -1, 0, Rsc3, -1, -1, -2, Rsc1);

  }
}

void
Formura_internal_381 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 22, 2, 32, 2, 256, Rsc2, -1, -1, -1, Rsc3, -1, -1,
      -1, Rsc2, 0, -1, -1, Rsc2, -2, -1, -1, Rsc2, -1, 0, -1, Rsc2, -1, -2, -1,
      Rsc2, -1, -1, 0, Rsc2, -1, -1, -2, Rsc0);

  }
}

void
Formura_internal_382 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_Om_83_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_83_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_83_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_83_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_83_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (256)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_83_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (256)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_83_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_83_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Facet_m1_0_0_src_2_0_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_83_r_2_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_83_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_83_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_0_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (32)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_0_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (32)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (32)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_1_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_Om_84_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_84_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_84_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_84_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_84_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (256)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_84_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (256)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_84_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_84_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Facet_m1_0_0_src_2_0_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_84_r_2_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_84_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_84_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_0_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (32)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_0_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (32)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (32)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_1_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 2, 34, 2, 258, Rsc1, -1, -1, -1, Rsc0, -1, -1,
      -1, Rsc1, 0, -1, -1, Rsc1, -2, -1, -1, Rsc1, -1, 0, -1, Rsc1, -1, -2, -1,
      Rsc1, -1, -1, 0, Rsc1, -1, -1, -2, Rsc2);

  }
}

void
Formura_internal_383 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 2, 34, 2, 258, Rsc0, -1, -1, -1, Rsc1, -1, -1,
      -1, Rsc0, 0, -1, -1, Rsc0, -2, -1, -1, Rsc0, -1, 0, -1, Rsc0, -1, -2, -1,
      Rsc0, -1, -1, 0, Rsc0, -1, -1, -2, Rsc3);

  }
}

void
Formura_internal_384 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_Om_85_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_85_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_85_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_85_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_85_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (258)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_85_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (258)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_85_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_85_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (2)] =
            Facet_m1_0_0_src_2_0_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_85_r_2_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_85_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_85_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_0_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (34)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_0_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (34)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (34)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_1_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_m1_Om_86_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_86_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_m1_0_Om_86_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_86_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_m1_Om_86_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (258)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_86_r_2_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (258)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_86_r_2_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_86_r_2_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (2)] =
            Facet_m1_0_0_src_2_0_0_dest_0_0_0_Recv.
            Ridge_m1_0_0_Om_86_r_2_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_86_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_m1_Om_86_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_0_1_0_dest_0_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (34)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_0_0_1_dest_0_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (34)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_1_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_0_1_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_1_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_0_0_1_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (34)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_1_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_0_1_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_1_0_0_r_0_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 26, 2, 36, 2, 260, Rsc2, -1, -1, -1, Rsc3, -1, -1,
      -1, Rsc2, 0, -1, -1, Rsc2, -2, -1, -1, Rsc2, -1, 0, -1, Rsc2, -1, -2, -1,
      Rsc2, -1, -1, 0, Rsc2, -1, -1, -2, Rsc0);

  }
}

void
Formura_internal_385 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 26, 2, 36, 2, 260, Rsc3, -1, -1, -1, Rsc2, -1, -1,
      -1, Rsc3, 0, -1, -1, Rsc3, -2, -1, -1, Rsc3, -1, 0, -1, Rsc3, -1, -2, -1,
      Rsc3, -1, -1, 0, Rsc3, -1, -1, -2, Rsc1);

  }
}
