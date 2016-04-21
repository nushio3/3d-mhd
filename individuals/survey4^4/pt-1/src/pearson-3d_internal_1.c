
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_12 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 24, 0, 35, 0, 258, Rsc3, 1, 1, 1, Rsc2, 1, 1, 1,
      Rsc3, 2, 1, 1, Rsc3, 0, 1, 1, Rsc3, 1, 2, 1, Rsc3, 1, 0, 1, Rsc3, 1, 1, 2,
      Rsc3, 1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_84_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_84_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_84_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_84_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_84_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_84_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_84_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_84_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_84_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_84_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_84_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_84_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_84_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_84_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_84_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_84_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_84_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_84_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_84_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_120 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 24, 0, 39, 2, 252, 29, 3, 263, 29, 3, 263, 30, 3,
      263, 28, 3, 263, 29, 4, 263, 29, 2, 263, 29, 3, 264, 29, 3, 262, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_80_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_80_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_121 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_79_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_79_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_80_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_80_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 37, 2, 254, Rsc0, -1, 1, -1, Rsc1, -1, 1,
      -1, Rsc0, 0, 1, -1, Rsc0, -2, 1, -1, Rsc0, -1, 2, -1, Rsc0, -1, 0, -1,
      Rsc0, -1, 1, 0, Rsc0, -1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_81_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_81_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_122 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 37, 2, 254, Rsc1, -1, 1, -1, Rsc0, -1, 1,
      -1, Rsc1, 0, 1, -1, Rsc1, -2, 1, -1, Rsc1, -1, 2, -1, Rsc1, -1, 0, -1,
      Rsc1, -1, 1, 0, Rsc1, -1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_82_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_82_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_123 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_81_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_81_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_82_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_82_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 35, 2, 256, Rsc3, -1, 1, -1, Rsc2, -1, 1,
      -1, Rsc3, 0, 1, -1, Rsc3, -2, 1, -1, Rsc3, -1, 2, -1, Rsc3, -1, 0, -1,
      Rsc3, -1, 1, 0, Rsc3, -1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_83_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_83_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_124 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 35, 2, 256, Rsc2, -1, 1, -1, Rsc3, -1, 1,
      -1, Rsc2, 0, 1, -1, Rsc2, -2, 1, -1, Rsc2, -1, 2, -1, Rsc2, -1, 0, -1,
      Rsc2, -1, 1, 0, Rsc2, -1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_84_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_84_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_125 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_83_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_83_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_84_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_84_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 33, 2, 258, Rsc1, -1, 1, -1, Rsc0, -1, 1,
      -1, Rsc1, 0, 1, -1, Rsc1, -2, 1, -1, Rsc1, -1, 2, -1, Rsc1, -1, 0, -1,
      Rsc1, -1, 1, 0, Rsc1, -1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_85_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_85_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_126 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 33, 2, 258, Rsc0, -1, 1, -1, Rsc1, -1, 1,
      -1, Rsc0, 0, 1, -1, Rsc0, -2, 1, -1, Rsc0, -1, 2, -1, Rsc0, -1, 0, -1,
      Rsc0, -1, 1, 0, Rsc0, -1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_86_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_86_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_127 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_85_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_85_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_86_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_86_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 31, 2, 260, Rsc2, -1, 1, -1, Rsc3, -1, 1,
      -1, Rsc2, 0, 1, -1, Rsc2, -2, 1, -1, Rsc2, -1, 2, -1, Rsc2, -1, 0, -1,
      Rsc2, -1, 1, 0, Rsc2, -1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_87_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_87_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_128 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 31, 2, 260, Rsc3, -1, 1, -1, Rsc2, -1, 1,
      -1, Rsc3, 0, 1, -1, Rsc3, -2, 1, -1, Rsc3, -1, 2, -1, Rsc3, -1, 0, -1,
      Rsc3, -1, 1, 0, Rsc3, -1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_88_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_88_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_129 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_87_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_87_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_88_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_88_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 29, 2, 262, Rsc0, -1, 1, -1, Rsc1, -1, 1,
      -1, Rsc0, 0, 1, -1, Rsc0, -2, 1, -1, Rsc0, -1, 2, -1, Rsc0, -1, 0, -1,
      Rsc0, -1, 1, 0, Rsc0, -1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_89_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_89_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_13 ()
{
#pragma omp parallel
  {
    Formura_subroutine_2 (0, 22, 0, 33, 0, 256, Rsc1, 1, 1, 1, Rsc0, 1, 1, 1,
      Rsc1, 2, 1, 1, Rsc1, 0, 1, 1, Rsc1, 1, 2, 1, Rsc1, 1, 0, 1, Rsc1, 1, 1, 2,
      Rsc1, 1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (31)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_85_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_85_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_85_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_85_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_85_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_85_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_85_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_85_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_85_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_85_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_85_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_85_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_85_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_85_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_85_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_85_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_85_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_85_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_85_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_130 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 29, 2, 262, Rsc1, -1, 1, -1, Rsc0, -1, 1,
      -1, Rsc1, 0, 1, -1, Rsc1, -2, 1, -1, Rsc1, -1, 2, -1, Rsc1, -1, 0, -1,
      Rsc1, -1, 1, 0, Rsc1, -1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_90_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_90_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_131 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_89_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_89_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_90_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_90_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 27, 2, 264, Rsc3, -1, 1, -1, Rsc2, -1, 1,
      -1, Rsc3, 0, 1, -1, Rsc3, -2, 1, -1, Rsc3, -1, 2, -1, Rsc3, -1, 0, -1,
      Rsc3, -1, 1, 0, Rsc3, -1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_91_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_91_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_132 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 27, 2, 264, Rsc2, -1, 1, -1, Rsc3, -1, 1,
      -1, Rsc2, 0, 1, -1, Rsc2, -2, 1, -1, Rsc2, -1, 2, -1, Rsc2, -1, 0, -1,
      Rsc2, -1, 1, 0, Rsc2, -1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_92_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_92_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_133 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_91_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_91_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_0_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_0_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_92_r_0_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_1_0_0_dest_1_0_1_Recv.
            Ridge_0_0_1_Om_92_r_1_0_0_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (24, 46, 10, 35, 258, 522, Rsc1, -23, -9, -257, Rsc0,
      -23, -9, -257, Rsc1, -22, -9, -257, Rsc1, -24, -9, -257, Rsc1, -23, -8,
      -257, Rsc1, -23, -10, -257, Rsc1, -23, -9, -256, Rsc1, -23, -9, -258, -8,
      -8, -8);

  }
}

void
Formura_internal_134 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (24, 46, 10, 35, 258, 522, Rsc0, -23, -9, -257, Rsc1,
      -23, -9, -257, Rsc0, -22, -9, -257, Rsc0, -24, -9, -257, Rsc0, -23, -8,
      -257, Rsc0, -23, -10, -257, Rsc0, -23, -9, -256, Rsc0, -23, -9, -258, -8,
      -8, -8);

  }
}

void
Formura_internal_135 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          U[ix + (68)][iy + (2)][iz + (514)] =
            Facet_1_0_1_src_0_0_0_dest_2_0_1_Recv.Ridge_1_0_1_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          V[ix + (68)][iy + (2)][iz + (514)] =
            Facet_1_0_1_src_0_0_0_dest_2_0_1_Recv.Ridge_1_0_1_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (2, 18, 0, 39, 2, 252, 51, 3, 263, 51, 3, 263, 52, 3,
      263, 50, 3, 263, 51, 4, 263, 51, 2, 263, 51, 3, 264, 51, 3, 262, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_2_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_79_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_136 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 18, 0, 39, 2, 252, 51, 3, 263, 51, 3, 263, 52, 3,
      263, 50, 3, 263, 51, 4, 263, 51, 2, 263, 51, 3, 264, 51, 3, 262, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_2_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_80_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_137 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_2_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_1_0_1_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_1_0_0_dest_2_0_1_Recv.
            Ridge_0_0_1_Om_79_r_1_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_2_0_0_dest_2_0_1_Recv.
            Ridge_0_0_1_Om_79_r_2_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_1_Recv.
            Ridge_1_0_0_Om_79_r_0_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_0_1_Recv.
            Ridge_1_0_0_Om_79_r_0_0_1_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (252)] =
            Facet_1_0_1_src_0_0_0_dest_2_0_1_Recv.
            Ridge_1_0_1_Om_79_r_0_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_2_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_1_0_1_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_1_0_0_dest_2_0_1_Recv.
            Ridge_0_0_1_Om_80_r_1_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_2_0_0_dest_2_0_1_Recv.
            Ridge_0_0_1_Om_80_r_2_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_1_Recv.
            Ridge_1_0_0_Om_80_r_0_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_0_1_Recv.
            Ridge_1_0_0_Om_80_r_0_0_1_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (252)] =
            Facet_1_0_1_src_0_0_0_dest_2_0_1_Recv.
            Ridge_1_0_1_Om_80_r_0_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 20, 0, 37, 2, 254, Rsc0, -1, 1, -1, Rsc1, -1, 1,
      -1, Rsc0, 0, 1, -1, Rsc0, -2, 1, -1, Rsc0, -1, 2, -1, Rsc0, -1, 0, -1,
      Rsc0, -1, 1, 0, Rsc0, -1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_2_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_81_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_138 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 20, 0, 37, 2, 254, Rsc1, -1, 1, -1, Rsc0, -1, 1,
      -1, Rsc1, 0, 1, -1, Rsc1, -2, 1, -1, Rsc1, -1, 2, -1, Rsc1, -1, 0, -1,
      Rsc1, -1, 1, 0, Rsc1, -1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_2_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_82_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_139 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_2_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_1_0_1_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_1_0_0_dest_2_0_1_Recv.
            Ridge_0_0_1_Om_81_r_1_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_2_0_0_dest_2_0_1_Recv.
            Ridge_0_0_1_Om_81_r_2_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_1_Recv.
            Ridge_1_0_0_Om_81_r_0_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_0_1_Recv.
            Ridge_1_0_0_Om_81_r_0_0_1_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (254)] =
            Facet_1_0_1_src_0_0_0_dest_2_0_1_Recv.
            Ridge_1_0_1_Om_81_r_0_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_2_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_1_0_1_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_1_0_0_dest_2_0_1_Recv.
            Ridge_0_0_1_Om_82_r_1_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_2_0_0_dest_2_0_1_Recv.
            Ridge_0_0_1_Om_82_r_2_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_1_Recv.
            Ridge_1_0_0_Om_82_r_0_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_0_1_Recv.
            Ridge_1_0_0_Om_82_r_0_0_1_r_2_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (254)] =
            Facet_1_0_1_src_0_0_0_dest_2_0_1_Recv.
            Ridge_1_0_1_Om_82_r_0_0_0_r_2_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 22, 0, 35, 2, 256, Rsc2, -1, 1, -1, Rsc3, -1, 1,
      -1, Rsc2, 0, 1, -1, Rsc2, -2, 1, -1, Rsc2, -1, 2, -1, Rsc2, -1, 0, -1,
      Rsc2, -1, 1, 0, Rsc2, -1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_2_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_83_r_2_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}
