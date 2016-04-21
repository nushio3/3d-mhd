
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_48 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 26, 0, 30, 0, 254, Rsc2, -1, 1, 1, Rsc3, -1, 1, 1,
      Rsc2, 0, 1, 1, Rsc2, -2, 1, 1, Rsc2, -1, 2, 1, Rsc2, -1, 0, 1, Rsc2, -1,
      1, 2, Rsc2, -1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (28)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_88_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_88_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (28)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_88_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_88_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_88_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_49 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_0_Recv.
            Ridge_1_0_0_Om_87_r_0_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_0_Recv.
            Ridge_1_0_0_Om_88_r_0_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 28, 0, 28, 0, 252, Rsc0, -1, 1, 1, Rsc1, -1, 1, 1,
      Rsc0, 0, 1, 1, Rsc0, -2, 1, 1, Rsc0, -1, 2, 1, Rsc0, -1, 0, 1, Rsc0, -1,
      1, 2, Rsc0, -1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (26)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_89_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_89_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_89_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_89_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_89_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_50 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 28, 0, 28, 0, 252, Rsc1, -1, 1, 1, Rsc0, -1, 1, 1,
      Rsc1, 0, 1, 1, Rsc1, -2, 1, 1, Rsc1, -1, 2, 1, Rsc1, -1, 0, 1, Rsc1, -1,
      1, 2, Rsc1, -1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (26)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_90_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_90_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_90_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_90_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_90_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_51 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_0_Recv.
            Ridge_1_0_0_Om_89_r_0_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_0_Recv.
            Ridge_1_0_0_Om_90_r_0_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 30, 0, 26, 0, 250, Rsc2, -1, 1, 1, Rsc3, -1, 1, 1,
      Rsc2, 0, 1, 1, Rsc2, -2, 1, 1, Rsc2, -1, 2, 1, Rsc2, -1, 0, 1, Rsc2, -1,
      1, 2, Rsc2, -1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (24)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_91_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_91_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_91_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_91_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_91_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_52 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 30, 0, 26, 0, 250, Rsc3, -1, 1, 1, Rsc2, -1, 1, 1,
      Rsc3, 0, 1, 1, Rsc3, -2, 1, 1, Rsc3, -1, 2, 1, Rsc3, -1, 0, 1, Rsc3, -1,
      1, 2, Rsc3, -1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (24)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_92_r_2_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_92_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_92_r_2_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_92_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_2_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_92_r_2_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_53 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_0_Recv.
            Ridge_1_0_0_Om_91_r_0_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_0_0_Recv.
            Ridge_1_0_0_Om_92_r_0_0_0_r_2_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (44, 74, 10, 34, 10, 258, Rsc1, -43, -9, -9, Rsc0, -43,
      -9, -9, Rsc1, -42, -9, -9, Rsc1, -44, -9, -9, Rsc1, -43, -8, -9, Rsc1,
      -43, -10, -9, Rsc1, -43, -9, -8, Rsc1, -43, -9, -10, -8, -8, -8);

  }
}

void
Formura_internal_54 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (44, 74, 10, 34, 10, 258, Rsc0, -43, -9, -9, Rsc1, -43,
      -9, -9, Rsc0, -42, -9, -9, Rsc0, -44, -9, -9, Rsc0, -43, -8, -9, Rsc0,
      -43, -10, -9, Rsc0, -43, -9, -8, Rsc0, -43, -9, -10, -8, -8, -8);

  }
}

void
Formura_internal_55 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          U[ix + (2)][iy + (66)][iz + (2)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.Ridge_0_1_0_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          V[ix + (2)][iy + (66)][iz + (2)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.Ridge_0_1_0_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (0, 27, 2, 28, 0, 262, 3, 39, 3, 3, 39, 3, 4, 39, 3, 2,
      39, 3, 3, 40, 3, 3, 38, 3, 3, 39, 4, 3, 39, 2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_79_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_79_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_79_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_79_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_79_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_56 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 27, 2, 28, 0, 262, 3, 39, 3, 3, 39, 3, 4, 39, 3, 2,
      39, 3, 3, 40, 3, 3, 38, 3, 3, 39, 4, 3, 39, 2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_80_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_80_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_80_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_80_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_80_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_57 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_79_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_80_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 25, 2, 30, 0, 260, Rsc0, 1, -1, 1, Rsc1, 1, -1, 1,
      Rsc0, 2, -1, 1, Rsc0, 0, -1, 1, Rsc0, 1, 0, 1, Rsc0, 1, -2, 1, Rsc0, 1,
      -1, 2, Rsc0, 1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_81_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_81_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_81_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_81_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_81_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_58 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 25, 2, 30, 0, 260, Rsc1, 1, -1, 1, Rsc0, 1, -1, 1,
      Rsc1, 2, -1, 1, Rsc1, 0, -1, 1, Rsc1, 1, 0, 1, Rsc1, 1, -2, 1, Rsc1, 1,
      -1, 2, Rsc1, 1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_82_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_82_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_82_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_82_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_82_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_59 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_81_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_82_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 23, 2, 32, 0, 258, Rsc3, 1, -1, 1, Rsc2, 1, -1, 1,
      Rsc3, 2, -1, 1, Rsc3, 0, -1, 1, Rsc3, 1, 0, 1, Rsc3, 1, -2, 1, Rsc3, 1,
      -1, 2, Rsc3, 1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_83_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_83_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_83_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_83_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_83_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_83_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_60 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 23, 2, 32, 0, 258, Rsc2, 1, -1, 1, Rsc3, 1, -1, 1,
      Rsc2, 2, -1, 1, Rsc2, 0, -1, 1, Rsc2, 1, 0, 1, Rsc2, 1, -2, 1, Rsc2, 1,
      -1, 2, Rsc2, 1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_84_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_84_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_84_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_84_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_84_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_61 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_83_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 23; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_84_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 21, 2, 34, 0, 256, Rsc1, 1, -1, 1, Rsc0, 1, -1, 1,
      Rsc1, 2, -1, 1, Rsc1, 0, -1, 1, Rsc1, 1, 0, 1, Rsc1, 1, -2, 1, Rsc1, 1,
      -1, 2, Rsc1, 1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (19)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (19)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_85_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_85_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (19)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_85_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_85_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_85_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_62 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 21, 2, 34, 0, 256, Rsc0, 1, -1, 1, Rsc1, 1, -1, 1,
      Rsc0, 2, -1, 1, Rsc0, 0, -1, 1, Rsc0, 1, 0, 1, Rsc0, 1, -2, 1, Rsc0, 1,
      -1, 2, Rsc0, 1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (19)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (19)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_86_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_86_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (19)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_86_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_86_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_86_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_63 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_85_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_86_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 19, 2, 36, 0, 254, Rsc2, 1, -1, 1, Rsc3, 1, -1, 1,
      Rsc2, 2, -1, 1, Rsc2, 0, -1, 1, Rsc2, 1, 0, 1, Rsc2, 1, -2, 1, Rsc2, 1,
      -1, 2, Rsc2, 1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (17)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (17)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_87_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_87_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (17)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_87_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_87_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_87_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_64 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 19, 2, 36, 0, 254, Rsc3, 1, -1, 1, Rsc2, 1, -1, 1,
      Rsc3, 2, -1, 1, Rsc3, 0, -1, 1, Rsc3, 1, 0, 1, Rsc3, 1, -2, 1, Rsc3, 1,
      -1, 2, Rsc3, 1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_88_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_88_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (17)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_88_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_88_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_88_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_65 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_87_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 19; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_88_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 17, 2, 38, 0, 252, Rsc0, 1, -1, 1, Rsc1, 1, -1, 1,
      Rsc0, 2, -1, 1, Rsc0, 0, -1, 1, Rsc0, 1, 0, 1, Rsc0, 1, -2, 1, Rsc0, 1,
      -1, 2, Rsc0, 1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_89_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_89_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_89_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_89_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_89_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_66 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 17, 2, 38, 0, 252, Rsc1, 1, -1, 1, Rsc0, 1, -1, 1,
      Rsc1, 2, -1, 1, Rsc1, 0, -1, 1, Rsc1, 1, 0, 1, Rsc1, 1, -2, 1, Rsc1, 1,
      -1, 2, Rsc1, 1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_90_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_90_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (15)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_90_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_90_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_90_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_67 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_89_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_90_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 15, 2, 40, 0, 250, Rsc3, 1, -1, 1, Rsc2, 1, -1, 1,
      Rsc3, 2, -1, 1, Rsc3, 0, -1, 1, Rsc3, 1, 0, 1, Rsc3, 1, -2, 1, Rsc3, 1,
      -1, 2, Rsc3, 1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_91_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_91_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_91_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_91_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_91_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_68 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 15, 2, 40, 0, 250, Rsc2, 1, -1, 1, Rsc3, 1, -1, 1,
      Rsc2, 2, -1, 1, Rsc2, 0, -1, 1, Rsc2, 1, 0, 1, Rsc2, 1, -2, 1, Rsc2, 1,
      -1, 2, Rsc2, 1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_0_1_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_92_r_0_1_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_92_r_0_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_92_r_0_1_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_92_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_1_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_92_r_0_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_69 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_91_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_0_1_0_Recv.
            Ridge_0_1_0_Om_92_r_0_0_0_r_0_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (10, 23, 34, 74, 10, 258, Rsc1, -9, -33, -9, Rsc0, -9,
      -33, -9, Rsc1, -8, -33, -9, Rsc1, -10, -33, -9, Rsc1, -9, -32, -9, Rsc1,
      -9, -34, -9, Rsc1, -9, -33, -8, Rsc1, -9, -33, -10, -8, -8, -8);

  }
}

void
Formura_internal_7 ()
{
#pragma omp parallel
  {
    Formura_subroutine_4 (0, 27, 0, 38, 0, 262, 3, 3, 3, 3, 3, 3, 4, 3, 3, 2, 3,
      3, 3, 4, 3, 3, 2, 3, 3, 3, 4, 3, 3, 2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_79_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_79_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_79_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_79_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_79_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_79_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_79_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_79_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_79_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_79_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_79_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_79_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_79_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_79_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_79_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_79_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_79_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_79_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_79_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_70 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (10, 23, 34, 74, 10, 258, Rsc0, -9, -33, -9, Rsc1, -9,
      -33, -9, Rsc0, -8, -33, -9, Rsc0, -10, -33, -9, Rsc0, -9, -32, -9, Rsc0,
      -9, -34, -9, Rsc0, -9, -33, -8, Rsc0, -9, -33, -10, -8, -8, -8);

  }
}

void
Formura_internal_71 ()
{
#pragma omp parallel
  {
    Formura_subroutine_4 (2, 23, 2, 28, 0, 262, 28, 39, 3, 28, 39, 3, 29, 39, 3,
      27, 39, 3, 28, 40, 3, 28, 38, 3, 28, 39, 4, 28, 39, 2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_79_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_79_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_72 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 23, 2, 28, 0, 262, 28, 39, 3, 28, 39, 3, 29, 39, 3,
      27, 39, 3, 28, 40, 3, 28, 38, 3, 28, 39, 4, 28, 39, 2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_80_r_1_1_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_80_r_1_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}
