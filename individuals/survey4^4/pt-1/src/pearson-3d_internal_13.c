
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_317 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 35, 2, 256, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_84_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_84_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_318 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_83_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_83_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_84_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_84_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 33, 2, 258, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_85_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_85_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_319 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 33, 2, 258, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_86_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_86_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_32 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 31, 0, 254, Rsc3, -1, 1, 1, Rsc2, -1, 1, 1,
      Rsc3, 0, 1, 1, Rsc3, -2, 1, 1, Rsc3, -1, 2, 1, Rsc3, -1, 0, 1, Rsc3, -1,
      1, 2, Rsc3, -1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (29)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (29)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_88_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_88_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_88_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_88_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (29)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_88_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_88_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_88_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_88_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_88_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_88_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_320 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_85_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_85_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_86_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_86_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 31, 2, 260, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_87_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_87_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_321 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 31, 2, 260, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_88_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_88_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_322 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_87_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_87_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_88_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_88_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 29, 2, 262, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_89_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_89_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_323 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 29, 2, 262, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_90_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_90_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_324 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_89_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_89_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_89_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_90_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_90_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Ridge_0_0_0_Om_90_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 27, 2, 264, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_91_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_91_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_325 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 27, 2, 264, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_92_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_1_1_0_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_92_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_1_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_1_1_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_1_1_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_326 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_91_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_91_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_91_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_2_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_92_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_1_1_0_Recv.
            Ridge_0_0_m1_Om_92_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_2_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Ridge_0_0_0_Om_92_r_1_1_1_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_2_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (24, 46, 35, 60, -6, 258, Rsc1, -23, -34, 7, Rsc0, -23,
      -34, 7, Rsc1, -22, -34, 7, Rsc1, -24, -34, 7, Rsc1, -23, -33, 7, Rsc1,
      -23, -35, 7, Rsc1, -23, -34, 8, Rsc1, -23, -34, 6, 8, 8, 8);

  }
}

void
Formura_internal_327 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (24, 46, 35, 60, -6, 258, Rsc0, -23, -34, 7, Rsc1, -23,
      -34, 7, Rsc0, -22, -34, 7, Rsc0, -24, -34, 7, Rsc0, -23, -33, 7, Rsc0,
      -23, -35, 7, Rsc0, -23, -34, 8, Rsc0, -23, -34, 6, 8, 8, 8);

  }
}

void
Formura_internal_328 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          U[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          V[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (2, 18, 0, 39, 2, 252, -1, 28, -1, -1, 28, -1, 0, 28,
      -1, -2, 28, -1, -1, 29, -1, -1, 27, -1, -1, 28, 0, -1, 28, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_79_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_329 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 18, 0, 39, 2, 252, -1, 28, -1, -1, 28, -1, 0, 28,
      -1, -2, 28, -1, -1, 29, -1, -1, 27, -1, -1, 28, 0, -1, 28, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_80_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_33 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 29, 0, 252, Rsc0, -1, 1, 1, Rsc1, -1, 1, 1,
      Rsc0, 0, 1, 1, Rsc0, -2, 1, 1, Rsc0, -1, 2, 1, Rsc0, -1, 0, 1, Rsc0, -1,
      1, 2, Rsc0, -1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (27)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (27)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_89_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_89_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_89_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_89_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (27)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_89_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_89_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_89_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_89_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_89_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_89_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_330 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_79_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_79_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_79_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_79_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_79_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_79_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_80_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_80_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_80_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_80_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_80_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (252)] =
            Ridge_0_0_0_Om_80_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_1_1_0_r_0_1_0[ix][iy][iz];
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
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_81_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_331 ()
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
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_82_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_332 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_81_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_81_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_81_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_81_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_81_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_81_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_82_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_82_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_82_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_82_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_82_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (254)] =
            Ridge_0_0_0_Om_82_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_1_1_0_r_0_1_0[ix][iy][iz];
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
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_83_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_333 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 22, 0, 35, 2, 256, Rsc3, -1, 1, -1, Rsc2, -1, 1,
      -1, Rsc3, 0, 1, -1, Rsc3, -2, 1, -1, Rsc3, -1, 2, -1, Rsc3, -1, 0, -1,
      Rsc3, -1, 1, 0, Rsc3, -1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_84_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_334 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_83_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_83_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_83_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_83_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_83_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_83_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_84_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_84_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_84_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_84_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_84_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (256)] =
            Ridge_0_0_0_Om_84_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 0, 33, 2, 258, Rsc1, -1, 1, -1, Rsc0, -1, 1,
      -1, Rsc1, 0, 1, -1, Rsc1, -2, 1, -1, Rsc1, -1, 2, -1, Rsc1, -1, 0, -1,
      Rsc1, -1, 1, 0, Rsc1, -1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_85_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_335 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 0, 33, 2, 258, Rsc0, -1, 1, -1, Rsc1, -1, 1,
      -1, Rsc0, 0, 1, -1, Rsc0, -2, 1, -1, Rsc0, -1, 2, -1, Rsc0, -1, 0, -1,
      Rsc0, -1, 1, 0, Rsc0, -1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_86_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_336 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_85_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_85_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_85_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_85_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_85_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_85_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_86_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_86_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_86_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_86_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_86_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (258)] =
            Ridge_0_0_0_Om_86_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 26, 0, 31, 2, 260, Rsc3, -1, 1, -1, Rsc2, -1, 1,
      -1, Rsc3, 0, 1, -1, Rsc3, -2, 1, -1, Rsc3, -1, 2, -1, Rsc3, -1, 0, -1,
      Rsc3, -1, 1, 0, Rsc3, -1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_87_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_337 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 26, 0, 31, 2, 260, Rsc2, -1, 1, -1, Rsc3, -1, 1,
      -1, Rsc2, 0, 1, -1, Rsc2, -2, 1, -1, Rsc2, -1, 2, -1, Rsc2, -1, 0, -1,
      Rsc2, -1, 1, 0, Rsc2, -1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_88_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_338 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_87_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_87_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_87_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_87_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_87_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_87_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_m1_Om_88_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Facet_m1_0_0_src_2_1_1_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_88_r_2_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_0_0_src_2_1_0_dest_0_1_0_Recv.
            Ridge_m1_0_0_Om_88_r_2_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_1_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_88_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_0_m1_src_0_1_1_dest_0_1_0_Recv.
            Ridge_0_0_m1_Om_88_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_1_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (260)] =
            Ridge_0_0_0_Om_88_r_0_1_1_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_1_1_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 28, 0, 29, 2, 262, Rsc0, -1, 1, -1, Rsc1, -1, 1,
      -1, Rsc0, 0, 1, -1, Rsc0, -2, 1, -1, Rsc0, -1, 2, -1, Rsc0, -1, 0, -1,
      Rsc0, -1, 1, 0, Rsc0, -1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_89_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_339 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 28, 0, 29, 2, 262, Rsc1, -1, 1, -1, Rsc0, -1, 1,
      -1, Rsc1, 0, 1, -1, Rsc1, -2, 1, -1, Rsc1, -1, 2, -1, Rsc1, -1, 0, -1,
      Rsc1, -1, 1, 0, Rsc1, -1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_0_1_0_dest_0_0_0_Send.
            Ridge_0_m1_0_Om_90_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_0_1_0_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}
