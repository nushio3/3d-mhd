
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_34 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 29, 0, 252, Rsc1, -1, 1, 1, Rsc0, -1, 1, 1,
      Rsc1, 0, 1, 1, Rsc1, -2, 1, 1, Rsc1, -1, 2, 1, Rsc1, -1, 0, 1, Rsc1, -1,
      1, 2, Rsc1, -1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (27)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (27)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_90_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_90_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_90_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_90_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_90_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_90_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_90_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_90_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_90_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_90_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_340 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_89_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_89_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_89_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_89_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_89_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_90_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_90_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_90_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_90_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_90_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 30, 0, 27, 2, 264, Rsc2, -1, 1, -1, Rsc3, -1, 1,
      -1, Rsc2, 0, 1, -1, Rsc2, -2, 1, -1, Rsc2, -1, 2, -1, Rsc2, -1, 0, -1,
      Rsc2, -1, 1, 0, Rsc2, -1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_91_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_341 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 30, 0, 27, 2, 264, Rsc3, -1, 1, -1, Rsc2, -1, 1,
      -1, Rsc3, 0, 1, -1, Rsc3, -2, 1, -1, Rsc3, -1, 2, -1, Rsc3, -1, 0, -1,
      Rsc3, -1, 1, 0, Rsc3, -1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_92_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_342 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_91_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_91_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_91_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_91_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_91_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_92_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_92_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_92_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_92_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_92_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (-6, 24, 35, 60, -6, 258, Rsc1, 7, -34, 7, Rsc0, 7,
      -34, 7, Rsc1, 8, -34, 7, Rsc1, 6, -34, 7, Rsc1, 7, -33, 7, Rsc1, 7, -35,
      7, Rsc1, 7, -34, 8, Rsc1, 7, -34, 6, 8, 8, 8);

  }
}

void
Formura_internal_343 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (-6, 24, 35, 60, -6, 258, Rsc0, 7, -34, 7, Rsc1, 7,
      -34, 7, Rsc0, 8, -34, 7, Rsc0, 6, -34, 7, Rsc0, 7, -33, 7, Rsc0, 7, -35,
      7, Rsc0, 7, -34, 8, Rsc0, 7, -34, 6, 8, 8, 8);

  }
}

void
Formura_internal_344 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          U[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          V[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (0, 28, 2, 29, 2, 252, 39, -1, -1, 39, -1, -1, 40, -1,
      -1, 38, -1, -1, 39, 0, -1, 39, -2, -1, 39, -1, 0, 39, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_79_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (26)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_345 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 28, 2, 29, 2, 252, 39, -1, -1, 39, -1, -1, 40, -1,
      -1, 38, -1, -1, 39, 0, -1, 39, -2, -1, 39, -1, 0, 39, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_80_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (26)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_346 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_79_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (29)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (29)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (29)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_80_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (29)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (29)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (29)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 26, 2, 31, 2, 254, Rsc0, 1, -1, -1, Rsc1, 1, -1,
      -1, Rsc0, 2, -1, -1, Rsc0, 0, -1, -1, Rsc0, 1, 0, -1, Rsc0, 1, -2, -1,
      Rsc0, 1, -1, 0, Rsc0, 1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_81_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_347 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 26, 2, 31, 2, 254, Rsc1, 1, -1, -1, Rsc0, 1, -1,
      -1, Rsc1, 2, -1, -1, Rsc1, 0, -1, -1, Rsc1, 1, 0, -1, Rsc1, 1, -2, -1,
      Rsc1, 1, -1, 0, Rsc1, 1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_82_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (24)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_348 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_81_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (31)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (31)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (31)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_82_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (31)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (31)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (31)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 24, 2, 33, 2, 256, Rsc3, 1, -1, -1, Rsc2, 1, -1,
      -1, Rsc3, 2, -1, -1, Rsc3, 0, -1, -1, Rsc3, 1, 0, -1, Rsc3, 1, -2, -1,
      Rsc3, 1, -1, 0, Rsc3, 1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_83_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_349 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 24, 2, 33, 2, 256, Rsc2, 1, -1, -1, Rsc3, 1, -1,
      -1, Rsc2, 2, -1, -1, Rsc2, 0, -1, -1, Rsc2, 1, 0, -1, Rsc2, 1, -2, -1,
      Rsc2, 1, -1, 0, Rsc2, 1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_84_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_35 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 27, 0, 250, Rsc3, -1, 1, 1, Rsc2, -1, 1, 1,
      Rsc3, 0, 1, 1, Rsc3, -2, 1, 1, Rsc3, -1, 2, 1, Rsc3, -1, 0, 1, Rsc3, -1,
      1, 2, Rsc3, -1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (25)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (25)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_91_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_91_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_91_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_91_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_91_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_91_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_91_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_91_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_91_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_91_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_350 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_83_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (33)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (33)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (33)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_84_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (33)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (33)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (33)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 2, 35, 2, 258, Rsc1, 1, -1, -1, Rsc0, 1, -1,
      -1, Rsc1, 2, -1, -1, Rsc1, 0, -1, -1, Rsc1, 1, 0, -1, Rsc1, 1, -2, -1,
      Rsc1, 1, -1, 0, Rsc1, 1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_85_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (20)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_351 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 2, 35, 2, 258, Rsc0, 1, -1, -1, Rsc1, 1, -1,
      -1, Rsc0, 2, -1, -1, Rsc0, 0, -1, -1, Rsc0, 1, 0, -1, Rsc0, 1, -2, -1,
      Rsc0, 1, -1, 0, Rsc0, 1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_86_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_352 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_85_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (35)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (35)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (35)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_86_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (35)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (35)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (35)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 20, 2, 37, 2, 260, Rsc2, 1, -1, -1, Rsc3, 1, -1,
      -1, Rsc2, 2, -1, -1, Rsc2, 0, -1, -1, Rsc2, 1, 0, -1, Rsc2, 1, -2, -1,
      Rsc2, 1, -1, 0, Rsc2, 1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_87_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (18)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_353 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 20, 2, 37, 2, 260, Rsc3, 1, -1, -1, Rsc2, 1, -1,
      -1, Rsc3, 2, -1, -1, Rsc3, 0, -1, -1, Rsc3, 1, 0, -1, Rsc3, 1, -2, -1,
      Rsc3, 1, -1, 0, Rsc3, 1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_88_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (18)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_354 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_87_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_87_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_87_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (37)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_87_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_87_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (37)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (37)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_88_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_88_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_88_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (37)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_88_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_88_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (37)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (37)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 18, 2, 39, 2, 262, Rsc0, 1, -1, -1, Rsc1, 1, -1,
      -1, Rsc0, 2, -1, -1, Rsc0, 0, -1, -1, Rsc0, 1, 0, -1, Rsc0, 1, -2, -1,
      Rsc0, 1, -1, 0, Rsc0, 1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_89_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (16)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_355 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 18, 2, 39, 2, 262, Rsc1, 1, -1, -1, Rsc0, 1, -1,
      -1, Rsc1, 2, -1, -1, Rsc1, 0, -1, -1, Rsc1, 1, 0, -1, Rsc1, 1, -2, -1,
      Rsc1, 1, -1, 0, Rsc1, 1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_90_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (16)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_356 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_89_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_89_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_89_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (39)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_89_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_89_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (39)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (39)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_90_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_90_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_90_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (39)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_90_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_90_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (39)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (39)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 16, 2, 41, 2, 264, Rsc3, 1, -1, -1, Rsc2, 1, -1,
      -1, Rsc3, 2, -1, -1, Rsc3, 0, -1, -1, Rsc3, 1, 0, -1, Rsc3, 1, -2, -1,
      Rsc3, 1, -1, 0, Rsc3, 1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_91_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (14)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_357 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 16, 2, 41, 2, 264, Rsc2, 1, -1, -1, Rsc3, 1, -1,
      -1, Rsc2, 2, -1, -1, Rsc2, 0, -1, -1, Rsc2, 1, 0, -1, Rsc2, 1, -2, -1,
      Rsc2, 1, -1, 0, Rsc2, 1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_0_0_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_92_r_2_0_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_2_0_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_358 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_91_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_91_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_91_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (41)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_91_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_91_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (41)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (41)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_m1_Om_92_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_m1_0_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_92_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_2_0_0_Recv.
            Ridge_0_m1_0_Om_92_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (41)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_92_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_2_0_0_Recv.
            Ridge_0_0_m1_Om_92_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (41)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_2_1_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_2_0_1_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (41)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_2_1_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (46, 60, -6, 35, -6, 258, Rsc1, -45, 7, 7, Rsc0, -45,
      7, 7, Rsc1, -44, 7, 7, Rsc1, -46, 7, 7, Rsc1, -45, 8, 7, Rsc1, -45, 6, 7,
      Rsc1, -45, 7, 8, Rsc1, -45, 7, 6, 8, 8, 8);

  }
}

void
Formura_internal_359 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (46, 60, -6, 35, -6, 258, Rsc0, -45, 7, 7, Rsc1, -45,
      7, 7, Rsc0, -44, 7, 7, Rsc0, -46, 7, 7, Rsc0, -45, 8, 7, Rsc0, -45, 6, 7,
      Rsc0, -45, 7, 8, Rsc0, -45, 7, 6, 8, 8, 8);

  }
}

void
Formura_internal_36 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 27, 0, 250, Rsc2, -1, 1, 1, Rsc3, -1, 1, 1,
      Rsc2, 0, 1, 1, Rsc2, -2, 1, 1, Rsc2, -1, 2, 1, Rsc2, -1, 0, 1, Rsc2, -1,
      1, 2, Rsc2, -1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (25)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (25)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_92_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_92_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_92_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_92_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (25)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_92_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_92_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_92_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_92_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_92_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_92_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_360 ()
{
#pragma omp parallel
  {
    Formura_subroutine_4 (0, 22, 2, 29, 2, 252, 17, -1, -1, 17, -1, -1, 18, -1,
      -1, 16, -1, -1, 17, 0, -1, 17, -2, -1, 17, -1, 0, 17, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_361 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 22, 2, 29, 2, 252, 17, -1, -1, 17, -1, -1, 18, -1,
      -1, 16, -1, -1, 17, 0, -1, 17, -2, -1, 17, -1, 0, 17, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}
