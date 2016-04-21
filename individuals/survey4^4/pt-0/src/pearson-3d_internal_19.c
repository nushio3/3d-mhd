
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_73 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_79_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_79_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_80_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_80_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 30, 0, 260, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_81_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_81_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_74 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 30, 0, 260, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_82_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_82_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_75 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_81_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_81_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_82_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_82_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 32, 0, 258, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_83_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_83_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_76 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 32, 0, 258, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_84_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_84_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_77 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_83_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_83_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_84_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_84_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 34, 0, 256, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_85_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_85_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_78 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 34, 0, 256, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_86_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_86_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_79 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_85_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_85_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_86_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_86_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 36, 0, 254, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_87_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_87_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_8 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 27, 0, 38, 0, 262, 3, 3, 3, 3, 3, 3, 4, 3, 3, 2, 3,
      3, 3, 4, 3, 3, 2, 3, 3, 3, 4, 3, 3, 2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_80_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_80_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_80_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_80_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_80_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_80_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_80_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_80_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_80_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_80_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_80_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_80_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_80_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_80_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_80_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_80_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_80_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_80_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_80_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_80 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 36, 0, 254, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_88_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_88_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_81 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_87_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_87_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_88_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_88_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 38, 0, 252, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_89_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_89_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_82 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 38, 0, 252, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_90_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_90_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_83 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_89_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_89_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_90_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_90_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 40, 0, 250, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_91_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_91_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_84 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 40, 0, 250, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_92_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_92_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_85 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_91_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_91_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_1_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_92_r_0_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_0_Recv.
            Ridge_0_1_0_Om_92_r_1_0_0_r_1_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (23, 44, 34, 74, 10, 258, Rsc1, -22, -33, -9, Rsc0,
      -22, -33, -9, Rsc1, -21, -33, -9, Rsc1, -23, -33, -9, Rsc1, -22, -32, -9,
      Rsc1, -22, -34, -9, Rsc1, -22, -33, -8, Rsc1, -22, -33, -10, -8, -8, -8);

  }
}

void
Formura_internal_86 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (23, 44, 34, 74, 10, 258, Rsc0, -22, -33, -9, Rsc1,
      -22, -33, -9, Rsc0, -21, -33, -9, Rsc0, -23, -33, -9, Rsc0, -22, -32, -9,
      Rsc0, -22, -34, -9, Rsc0, -22, -33, -8, Rsc0, -22, -33, -10, -8, -8, -8);

  }
}

void
Formura_internal_87 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          U[ix + (66)][iy + (66)][iz + (2)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.Ridge_1_1_0_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          V[ix + (66)][iy + (66)][iz + (2)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.Ridge_1_1_0_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (2, 18, 2, 28, 0, 262, 49, 39, 3, 49, 39, 3, 50, 39, 3,
      48, 39, 3, 49, 40, 3, 49, 38, 3, 49, 39, 4, 49, 39, 2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_79_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_88 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 18, 2, 28, 0, 262, 49, 39, 3, 49, 39, 3, 50, 39, 3,
      48, 39, 3, 49, 40, 3, 49, 38, 3, 49, 39, 4, 49, 39, 2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_80_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_89 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_79_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_79_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_79_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (18)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_79_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (18)][iy + (28)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_79_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_80_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_80_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_80_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (18)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_80_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (18)][iy + (28)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_80_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 20, 2, 30, 0, 260, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_81_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_9 ()
{
#pragma omp parallel
  {
    Formura_subroutine_2 (0, 25, 0, 36, 0, 260, Rsc0, 1, 1, 1, Rsc1, 1, 1, 1,
      Rsc0, 2, 1, 1, Rsc0, 0, 1, 1, Rsc0, 1, 2, 1, Rsc0, 1, 0, 1, Rsc0, 1, 1, 2,
      Rsc0, 1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_81_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_81_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_81_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_81_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_81_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_81_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_81_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_81_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_81_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_81_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_81_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_81_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_81_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_81_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_81_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_81_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_81_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_81_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_81_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_90 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 20, 2, 30, 0, 260, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_82_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_91 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_81_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_81_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_81_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (20)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_81_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (20)][iy + (30)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_81_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_82_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_82_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_82_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (20)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_82_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (20)][iy + (30)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_82_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 22, 2, 32, 0, 258, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_83_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_92 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 22, 2, 32, 0, 258, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_84_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_93 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_83_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_83_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_83_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_83_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (32)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_83_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_84_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_84_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_84_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_84_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (32)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_84_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 2, 34, 0, 256, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_85_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}
