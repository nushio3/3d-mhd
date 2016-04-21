
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_16 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 19, 0, 30, 0, 254, Rsc2, 1, 1, 1, Rsc3, 1, 1, 1,
      Rsc2, 2, 1, 1, Rsc2, 0, 1, 1, Rsc2, 1, 2, 1, Rsc2, 1, 0, 1, Rsc2, 1, 1, 2,
      Rsc2, 1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (28)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (28)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_88_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_88_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_88_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_88_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_88_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_88_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_88_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_88_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_88_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_88_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_88_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_88_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_88_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_88_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (28)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_88_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_88_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_88_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_88_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_88_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_160 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 19, 2, 36, 2, 260, Rsc3, 1, -1, -1, Rsc2, 1, -1,
      -1, Rsc3, 2, -1, -1, Rsc3, 0, -1, -1, Rsc3, 1, 0, -1, Rsc3, 1, -2, -1,
      Rsc3, 1, -1, 0, Rsc3, 1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_0_1_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_1_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_88_r_0_1_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_161 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_87_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_0_1_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_87_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_87_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_87_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_1_Om_87_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_88_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_0_1_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_88_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_88_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_88_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_1_Om_88_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 17, 2, 38, 2, 262, Rsc0, 1, -1, -1, Rsc1, 1, -1,
      -1, Rsc0, 2, -1, -1, Rsc0, 0, -1, -1, Rsc0, 1, 0, -1, Rsc0, 1, -2, -1,
      Rsc0, 1, -1, 0, Rsc0, 1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_0_1_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_1_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_89_r_0_1_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_162 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 17, 2, 38, 2, 262, Rsc1, 1, -1, -1, Rsc0, 1, -1,
      -1, Rsc1, 2, -1, -1, Rsc1, 0, -1, -1, Rsc1, 1, 0, -1, Rsc1, 1, -2, -1,
      Rsc1, 1, -1, 0, Rsc1, 1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_0_1_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_1_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_90_r_0_1_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_163 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_89_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_0_1_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_89_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_89_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_89_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_1_Om_89_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_90_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_0_1_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_90_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_90_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_90_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_1_Om_90_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 15, 2, 40, 2, 264, Rsc3, 1, -1, -1, Rsc2, 1, -1,
      -1, Rsc3, 2, -1, -1, Rsc3, 0, -1, -1, Rsc3, 1, 0, -1, Rsc3, 1, -2, -1,
      Rsc3, 1, -1, 0, Rsc3, 1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_0_1_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_1_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_91_r_0_1_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_164 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 15, 2, 40, 2, 264, Rsc2, 1, -1, -1, Rsc3, 1, -1,
      -1, Rsc2, 2, -1, -1, Rsc2, 0, -1, -1, Rsc2, 1, 0, -1, Rsc2, 1, -2, -1,
      Rsc2, 1, -1, 0, Rsc2, 1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_0_1_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_1_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_92_r_0_1_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_165 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_91_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_0_1_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_91_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_91_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_91_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_1_Om_91_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_92_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_0_1_0_dest_0_1_1_Recv.
            Ridge_0_0_1_Om_92_r_0_1_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_92_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_0_1_1_Recv.
            Ridge_0_1_0_Om_92_r_0_0_1_r_0_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_0_0_0_dest_0_1_1_Recv.
            Ridge_0_1_1_Om_92_r_0_0_0_r_0_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (10, 23, 34, 74, 258, 522, Rsc1, -9, -33, -257, Rsc0,
      -9, -33, -257, Rsc1, -8, -33, -257, Rsc1, -10, -33, -257, Rsc1, -9, -32,
      -257, Rsc1, -9, -34, -257, Rsc1, -9, -33, -256, Rsc1, -9, -33, -258, -8,
      -8, -8);

  }
}

void
Formura_internal_166 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (10, 23, 34, 74, 258, 522, Rsc0, -9, -33, -257, Rsc1,
      -9, -33, -257, Rsc0, -8, -33, -257, Rsc0, -10, -33, -257, Rsc0, -9, -32,
      -257, Rsc0, -9, -34, -257, Rsc0, -9, -33, -256, Rsc0, -9, -33, -258, -8,
      -8, -8);

  }
}

void
Formura_internal_167 ()
{
#pragma omp parallel
  {
    Formura_subroutine_4 (2, 23, 2, 28, 2, 252, 28, 39, 263, 28, 39, 263, 29,
      39, 263, 27, 39, 263, 28, 40, 263, 28, 38, 263, 28, 39, 264, 28, 39, 262,
      Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_168 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 23, 2, 28, 2, 252, 28, 39, 263, 28, 39, 263, 29,
      39, 263, 27, 39, 263, 28, 40, 263, 28, 38, 263, 28, 39, 264, 28, 39, 262,
      Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_169 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_79_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_79_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (252)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_79_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (252)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_79_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_79_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_79_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_79_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_79_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (252)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_79_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (252)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_79_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_80_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_80_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (252)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_80_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (252)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_80_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_80_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_80_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_80_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_80_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (252)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_80_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (252)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_80_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 30, 2, 254, Rsc0, -1, -1, -1, Rsc1, -1, -1,
      -1, Rsc0, 0, -1, -1, Rsc0, -2, -1, -1, Rsc0, -1, 0, -1, Rsc0, -1, -2, -1,
      Rsc0, -1, -1, 0, Rsc0, -1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_17 ()
{
#pragma omp parallel
  {
    Formura_subroutine_2 (0, 17, 0, 28, 0, 252, Rsc0, 1, 1, 1, Rsc1, 1, 1, 1,
      Rsc0, 2, 1, 1, Rsc0, 0, 1, 1, Rsc0, 1, 2, 1, Rsc0, 1, 0, 1, Rsc0, 1, 1, 2,
      Rsc0, 1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (26)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (26)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_89_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_89_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_89_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_89_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_89_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_89_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_89_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_89_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_89_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_89_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_89_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_89_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_89_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_89_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (26)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_89_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_89_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_89_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_89_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_89_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_170 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 30, 2, 254, Rsc1, -1, -1, -1, Rsc0, -1, -1,
      -1, Rsc1, 0, -1, -1, Rsc1, -2, -1, -1, Rsc1, -1, 0, -1, Rsc1, -1, -2, -1,
      Rsc1, -1, -1, 0, Rsc1, -1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_171 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_81_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_81_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (254)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_81_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (254)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_81_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_81_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_81_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_81_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_81_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (254)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_81_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (254)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_81_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_82_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_82_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (254)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_82_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (254)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_82_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_82_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_82_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_82_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_82_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (254)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_82_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (254)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_82_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 32, 2, 256, Rsc2, -1, -1, -1, Rsc3, -1, -1,
      -1, Rsc2, 0, -1, -1, Rsc2, -2, -1, -1, Rsc2, -1, 0, -1, Rsc2, -1, -2, -1,
      Rsc2, -1, -1, 0, Rsc2, -1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_172 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 32, 2, 256, Rsc3, -1, -1, -1, Rsc2, -1, -1,
      -1, Rsc3, 0, -1, -1, Rsc3, -2, -1, -1, Rsc3, -1, 0, -1, Rsc3, -1, -2, -1,
      Rsc3, -1, -1, 0, Rsc3, -1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_173 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_83_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_83_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (256)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_83_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (256)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_83_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_83_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_83_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_83_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_83_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (256)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_83_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (256)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_83_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_84_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_84_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (256)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_84_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (256)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_84_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_84_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_84_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_84_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_84_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (256)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_84_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (256)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_84_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 34, 2, 258, Rsc1, -1, -1, -1, Rsc0, -1, -1,
      -1, Rsc1, 0, -1, -1, Rsc1, -2, -1, -1, Rsc1, -1, 0, -1, Rsc1, -1, -2, -1,
      Rsc1, -1, -1, 0, Rsc1, -1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_174 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 34, 2, 258, Rsc0, -1, -1, -1, Rsc1, -1, -1,
      -1, Rsc0, 0, -1, -1, Rsc0, -2, -1, -1, Rsc0, -1, 0, -1, Rsc0, -1, -2, -1,
      Rsc0, -1, -1, 0, Rsc0, -1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}
