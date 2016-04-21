
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_362 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_79_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_79_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_79_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (29)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (29)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_79_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (29)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (29)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (22)][iy + (29)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (29)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_80_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_80_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_80_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (29)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (29)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_80_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (29)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (29)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (22)][iy + (29)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (29)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 2, 31, 2, 254, Rsc0, 1, -1, -1, Rsc1, 1, -1,
      -1, Rsc0, 2, -1, -1, Rsc0, 0, -1, -1, Rsc0, 1, 0, -1, Rsc0, 1, -2, -1,
      Rsc0, 1, -1, 0, Rsc0, 1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_363 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 2, 31, 2, 254, Rsc1, 1, -1, -1, Rsc0, 1, -1,
      -1, Rsc1, 2, -1, -1, Rsc1, 0, -1, -1, Rsc1, 1, 0, -1, Rsc1, 1, -2, -1,
      Rsc1, 1, -1, 0, Rsc1, 1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_364 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_81_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_81_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_81_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (31)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (31)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_81_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (31)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (31)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (22)][iy + (31)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (31)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_82_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_82_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_82_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (31)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (31)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_82_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (31)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (31)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (22)][iy + (31)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (31)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 2, 33, 2, 256, Rsc2, 1, -1, -1, Rsc3, 1, -1,
      -1, Rsc2, 2, -1, -1, Rsc2, 0, -1, -1, Rsc2, 1, 0, -1, Rsc2, 1, -2, -1,
      Rsc2, 1, -1, 0, Rsc2, 1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_365 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 2, 33, 2, 256, Rsc3, 1, -1, -1, Rsc2, 1, -1,
      -1, Rsc3, 2, -1, -1, Rsc3, 0, -1, -1, Rsc3, 1, 0, -1, Rsc3, 1, -2, -1,
      Rsc3, 1, -1, 0, Rsc3, 1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_366 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_83_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_83_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_83_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (33)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (33)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_83_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (33)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (33)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (33)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (33)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_84_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_84_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_84_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (33)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (33)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_84_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (33)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (33)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (33)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (33)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 2, 35, 2, 258, Rsc1, 1, -1, -1, Rsc0, 1, -1,
      -1, Rsc1, 2, -1, -1, Rsc1, 0, -1, -1, Rsc1, 1, 0, -1, Rsc1, 1, -2, -1,
      Rsc1, 1, -1, 0, Rsc1, 1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_367 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 2, 35, 2, 258, Rsc0, 1, -1, -1, Rsc1, 1, -1,
      -1, Rsc0, 2, -1, -1, Rsc0, 0, -1, -1, Rsc0, 1, 0, -1, Rsc0, 1, -2, -1,
      Rsc0, 1, -1, 0, Rsc0, 1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_368 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_85_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_85_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_85_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (35)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (35)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_85_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (35)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (35)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (22)][iy + (35)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (35)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_86_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_86_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_86_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (35)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (35)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_86_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (35)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (35)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (22)][iy + (35)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (35)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 2, 37, 2, 260, Rsc3, 1, -1, -1, Rsc2, 1, -1,
      -1, Rsc3, 2, -1, -1, Rsc3, 0, -1, -1, Rsc3, 1, 0, -1, Rsc3, 1, -2, -1,
      Rsc3, 1, -1, 0, Rsc3, 1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_369 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 2, 37, 2, 260, Rsc2, 1, -1, -1, Rsc3, 1, -1,
      -1, Rsc2, 2, -1, -1, Rsc2, 0, -1, -1, Rsc2, 1, 0, -1, Rsc2, 1, -2, -1,
      Rsc2, 1, -1, 0, Rsc2, 1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_37 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (24, 46, 10, 35, 10, 258, Rsc1, -23, -9, -9, Rsc0, -23,
      -9, -9, Rsc1, -22, -9, -9, Rsc1, -24, -9, -9, Rsc1, -23, -8, -9, Rsc1,
      -23, -10, -9, Rsc1, -23, -9, -8, Rsc1, -23, -9, -10, -8, -8, -8);

  }
}

void
Formura_internal_370 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_87_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_87_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (260)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_87_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_87_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_87_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_87_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (37)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_87_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (37)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_87_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_87_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_87_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (37)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (37)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (37)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (37)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_88_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_88_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (260)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_88_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_88_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_88_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_88_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (37)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_88_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (37)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_88_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_88_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_88_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (37)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (37)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (37)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (37)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 2, 39, 2, 262, Rsc0, 1, -1, -1, Rsc1, 1, -1,
      -1, Rsc0, 2, -1, -1, Rsc0, 0, -1, -1, Rsc0, 1, 0, -1, Rsc0, 1, -2, -1,
      Rsc0, 1, -1, 0, Rsc0, 1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_371 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 2, 39, 2, 262, Rsc1, 1, -1, -1, Rsc0, 1, -1,
      -1, Rsc1, 2, -1, -1, Rsc1, 0, -1, -1, Rsc1, 1, 0, -1, Rsc1, 1, -2, -1,
      Rsc1, 1, -1, 0, Rsc1, 1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_372 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_89_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_89_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (262)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_89_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_89_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_89_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_89_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (39)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_89_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (39)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_89_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_89_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_89_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (39)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (39)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (22)][iy + (39)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (39)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_90_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_m1_Om_90_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (262)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_90_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_90_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_2_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_90_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_0_m1_0_src_1_1_0_dest_1_0_0_Recv.
            Ridge_0_m1_0_Om_90_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (39)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_90_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (39)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_90_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_2_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_90_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_0_0_m1_src_1_0_1_dest_1_0_0_Recv.
            Ridge_0_0_m1_Om_90_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (39)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_2_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (39)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_1_1_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_2_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_1_0_1_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (22)][iy + (39)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_2_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (39)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_1_1_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (22)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_2_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 2, 41, 2, 264, Rsc2, 1, -1, -1, Rsc3, 1, -1,
      -1, Rsc2, 2, -1, -1, Rsc2, 0, -1, -1, Rsc2, 1, 0, -1, Rsc2, 1, -2, -1,
      Rsc2, 1, -1, 0, Rsc2, 1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_373 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 2, 41, 2, 264, Rsc3, 1, -1, -1, Rsc2, 1, -1,
      -1, Rsc3, 2, -1, -1, Rsc3, 0, -1, -1, Rsc3, 1, 0, -1, Rsc3, 1, -2, -1,
      Rsc3, 1, -1, 0, Rsc3, 1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}
