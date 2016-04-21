
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_94 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 2, 34, 0, 256, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_86_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_95 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_85_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_85_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_85_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_85_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (34)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_85_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_86_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_86_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_86_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_86_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (34)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_86_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 26, 2, 36, 0, 254, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_87_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_96 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 26, 2, 36, 0, 254, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_88_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_97 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_87_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_87_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_87_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (26)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_87_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (26)][iy + (36)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_87_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_88_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_88_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_88_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (26)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_88_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (26)][iy + (36)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_88_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 28, 2, 38, 0, 252, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_89_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_98 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 28, 2, 38, 0, 252, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_90_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_99 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_89_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_89_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_89_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (28)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_89_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (28)][iy + (38)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_89_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_90_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_90_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_90_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (28)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_90_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (28)][iy + (38)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_90_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 30, 2, 40, 0, 250, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_91_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_subroutine_0 (int argx0, int argx1, int argx2, int argx3, int argx4,
  int argx5, rsc_surface * __restrict argx6, int argx7, int argx8, int argx9,
  rsc_surface * __restrict argx10, int argx11, int argx12, int argx13,
  rsc_surface * __restrict argx14, int argx15, int argx16, int argx17,
  rsc_surface * __restrict argx18, int argx19, int argx20, int argx21,
  rsc_surface * __restrict argx22, int argx23, int argx24, int argx25,
  rsc_surface * __restrict argx26, int argx27, int argx28, int argx29,
  rsc_surface * __restrict argx30, int argx31, int argx32, int argx33,
  rsc_surface * __restrict argx34, int argx35, int argx36, int argx37,
  rsc_surface * __restrict argx38)
{
#pragma omp for collapse(2)
  for (int ix = argx0; ix < argx1; ++ix) {
    for (int iy = argx2; iy < argx3; ++iy) {
      for (int iz = argx4; iz < argx5; ++iz) {
        double a = argx6[ix + (argx7)][iy + (argx8)][iz + (argx9)];
        double a_0 = (1.0 / 900.0);
        double a_1 = argx10[ix + (argx11)][iy + (argx12)][iz + (argx13)];
        double a_2 = (a_0 * a_1);
        double a_3 = (a_2 * a);
        double a_4 = (a_3 * a);
        double a_5 = (6.0 / 86400.0);
        double a_6 = (a_5 * a);
        double a_7 = (a_4 - a_6);
        double a_8 = (1.0e-3 * 1.0e-3);
        double a_9 = (6.1e-11 / a_8);
        double a_10 = argx14[ix + (argx15)][iy + (argx16)][iz + (argx17)];
        double a_11 = (a_10 - a);
        double a_12 = argx18[ix + (argx19)][iy + (argx20)][iz + (argx21)];
        double a_13 = (a - a_12);
        double a_14 = (a_11 - a_13);
        double a_15 = argx22[ix + (argx23)][iy + (argx24)][iz + (argx25)];
        double a_16 = (a_15 - a);
        double a_17 = argx26[ix + (argx27)][iy + (argx28)][iz + (argx29)];
        double a_18 = (a - a_17);
        double a_19 = (a_16 - a_18);
        double a_20 = (a_14 + a_19);
        double a_21 = argx30[ix + (argx31)][iy + (argx32)][iz + (argx33)];
        double a_22 = (a_21 - a);
        double a_23 = argx34[ix + (argx35)][iy + (argx36)][iz + (argx37)];
        double a_24 = (a - a_23);
        double a_25 = (a_22 - a_24);
        double a_26 = (a_20 + a_25);
        double a_27 = (a_9 * a_26);
        double a_28 = (a_7 + a_27);
        double a_29 = (200.0 * a_28);
        double a_30 = (a + a_29);

        argx38[ix][iy][iz] = (+a_30);
      }
    }
  }
} void

Formura_subroutine_1 (int argx0, int argx1, int argx2, int argx3, int argx4,
  int argx5, rsc_surface * __restrict argx6, int argx7, int argx8, int argx9,
  rsc_surface * __restrict argx10, int argx11, int argx12, int argx13,
  rsc_surface * __restrict argx14, int argx15, int argx16, int argx17,
  rsc_surface * __restrict argx18, int argx19, int argx20, int argx21,
  rsc_surface * __restrict argx22, int argx23, int argx24, int argx25,
  rsc_surface * __restrict argx26, int argx27, int argx28, int argx29,
  rsc_surface * __restrict argx30, int argx31, int argx32, int argx33,
  rsc_surface * __restrict argx34, int argx35, int argx36, int argx37,
  int argx38, int argx39, int argx40)
{
#pragma omp for collapse(2)
  for (int ix = argx0; ix < argx1; ++ix) {
    for (int iy = argx2; iy < argx3; ++iy) {
      for (int iz = argx4; iz < argx5; ++iz) {
        double a = argx6[ix + (argx7)][iy + (argx8)][iz + (argx9)];
        double a_0 = (1.0 / 900.0);
        double a_1 = argx10[ix + (argx11)][iy + (argx12)][iz + (argx13)];
        double a_2 = (a_0 * a_1);
        double a_3 = (a_2 * a);
        double a_4 = (a_3 * a);
        double a_5 = (6.0 / 86400.0);
        double a_6 = (a_5 * a);
        double a_7 = (a_4 - a_6);
        double a_8 = (1.0e-3 * 1.0e-3);
        double a_9 = (6.1e-11 / a_8);
        double a_10 = argx14[ix + (argx15)][iy + (argx16)][iz + (argx17)];
        double a_11 = (a_10 - a);
        double a_12 = argx18[ix + (argx19)][iy + (argx20)][iz + (argx21)];
        double a_13 = (a - a_12);
        double a_14 = (a_11 - a_13);
        double a_15 = argx22[ix + (argx23)][iy + (argx24)][iz + (argx25)];
        double a_16 = (a_15 - a);
        double a_17 = argx26[ix + (argx27)][iy + (argx28)][iz + (argx29)];
        double a_18 = (a - a_17);
        double a_19 = (a_16 - a_18);
        double a_20 = (a_14 + a_19);
        double a_21 = argx30[ix + (argx31)][iy + (argx32)][iz + (argx33)];
        double a_22 = (a_21 - a);
        double a_23 = argx34[ix + (argx35)][iy + (argx36)][iz + (argx37)];
        double a_24 = (a - a_23);
        double a_25 = (a_22 - a_24);
        double a_26 = (a_20 + a_25);
        double a_27 = (a_9 * a_26);
        double a_28 = (a_7 + a_27);
        double a_29 = (200.0 * a_28);
        double a_30 = (a + a_29);

        V[ix + (argx38)][iy + (argx39)][iz + (argx40)] = a_30;
      }
    }
  }
} void

Formura_subroutine_2 (int argx0, int argx1, int argx2, int argx3, int argx4,
  int argx5, rsc_surface * __restrict argx6, int argx7, int argx8, int argx9,
  rsc_surface * __restrict argx10, int argx11, int argx12, int argx13,
  rsc_surface * __restrict argx14, int argx15, int argx16, int argx17,
  rsc_surface * __restrict argx18, int argx19, int argx20, int argx21,
  rsc_surface * __restrict argx22, int argx23, int argx24, int argx25,
  rsc_surface * __restrict argx26, int argx27, int argx28, int argx29,
  rsc_surface * __restrict argx30, int argx31, int argx32, int argx33,
  rsc_surface * __restrict argx34, int argx35, int argx36, int argx37,
  rsc_surface * __restrict argx38)
{
#pragma omp for collapse(2)
  for (int ix = argx0; ix < argx1; ++ix) {
    for (int iy = argx2; iy < argx3; ++iy) {
      for (int iz = argx4; iz < argx5; ++iz) {
        double a = argx6[ix + (argx7)][iy + (argx8)][iz + (argx9)];
        double a_0 = (1.0 / 900.0);
        double a_1 = (a_0 * a);
        double a_2 = argx10[ix + (argx11)][iy + (argx12)][iz + (argx13)];
        double a_3 = (a_1 * a_2);
        double a_4 = (a_3 * a_2);
        double a_5 = (-a_4);
        double a_6 = (1.0 / 86400.0);
        double a_7 = (1.0 - a);
        double a_8 = (a_6 * a_7);
        double a_9 = (a_5 + a_8);
        double a_10 = (0.1 * 2.3e-9);
        double a_11 = (1.0e-3 * 1.0e-3);
        double a_12 = (a_10 / a_11);
        double a_13 = argx14[ix + (argx15)][iy + (argx16)][iz + (argx17)];
        double a_14 = (a_13 - a);
        double a_15 = argx18[ix + (argx19)][iy + (argx20)][iz + (argx21)];
        double a_16 = (a - a_15);
        double a_17 = (a_14 - a_16);
        double a_18 = argx22[ix + (argx23)][iy + (argx24)][iz + (argx25)];
        double a_19 = (a_18 - a);
        double a_20 = argx26[ix + (argx27)][iy + (argx28)][iz + (argx29)];
        double a_21 = (a - a_20);
        double a_22 = (a_19 - a_21);
        double a_23 = (a_17 + a_22);
        double a_24 = argx30[ix + (argx31)][iy + (argx32)][iz + (argx33)];
        double a_25 = (a_24 - a);
        double a_26 = argx34[ix + (argx35)][iy + (argx36)][iz + (argx37)];
        double a_27 = (a - a_26);
        double a_28 = (a_25 - a_27);
        double a_29 = (a_23 + a_28);
        double a_30 = (a_12 * a_29);
        double a_31 = (a_9 + a_30);
        double a_32 = (200.0 * a_31);
        double a_33 = (a + a_32);

        argx38[ix][iy][iz] = (+a_33);
      }
    }
  }
} void

Formura_subroutine_3 (int argx0, int argx1, int argx2, int argx3, int argx4,
  int argx5, rsc_surface * __restrict argx6, int argx7, int argx8, int argx9,
  rsc_surface * __restrict argx10, int argx11, int argx12, int argx13,
  rsc_surface * __restrict argx14, int argx15, int argx16, int argx17,
  rsc_surface * __restrict argx18, int argx19, int argx20, int argx21,
  rsc_surface * __restrict argx22, int argx23, int argx24, int argx25,
  rsc_surface * __restrict argx26, int argx27, int argx28, int argx29,
  rsc_surface * __restrict argx30, int argx31, int argx32, int argx33,
  rsc_surface * __restrict argx34, int argx35, int argx36, int argx37,
  int argx38, int argx39, int argx40)
{
#pragma omp for collapse(2)
  for (int ix = argx0; ix < argx1; ++ix) {
    for (int iy = argx2; iy < argx3; ++iy) {
      for (int iz = argx4; iz < argx5; ++iz) {
        double a = argx6[ix + (argx7)][iy + (argx8)][iz + (argx9)];
        double a_0 = (1.0 / 900.0);
        double a_1 = (a_0 * a);
        double a_2 = argx10[ix + (argx11)][iy + (argx12)][iz + (argx13)];
        double a_3 = (a_1 * a_2);
        double a_4 = (a_3 * a_2);
        double a_5 = (-a_4);
        double a_6 = (1.0 / 86400.0);
        double a_7 = (1.0 - a);
        double a_8 = (a_6 * a_7);
        double a_9 = (a_5 + a_8);
        double a_10 = (0.1 * 2.3e-9);
        double a_11 = (1.0e-3 * 1.0e-3);
        double a_12 = (a_10 / a_11);
        double a_13 = argx14[ix + (argx15)][iy + (argx16)][iz + (argx17)];
        double a_14 = (a_13 - a);
        double a_15 = argx18[ix + (argx19)][iy + (argx20)][iz + (argx21)];
        double a_16 = (a - a_15);
        double a_17 = (a_14 - a_16);
        double a_18 = argx22[ix + (argx23)][iy + (argx24)][iz + (argx25)];
        double a_19 = (a_18 - a);
        double a_20 = argx26[ix + (argx27)][iy + (argx28)][iz + (argx29)];
        double a_21 = (a - a_20);
        double a_22 = (a_19 - a_21);
        double a_23 = (a_17 + a_22);
        double a_24 = argx30[ix + (argx31)][iy + (argx32)][iz + (argx33)];
        double a_25 = (a_24 - a);
        double a_26 = argx34[ix + (argx35)][iy + (argx36)][iz + (argx37)];
        double a_27 = (a - a_26);
        double a_28 = (a_25 - a_27);
        double a_29 = (a_23 + a_28);
        double a_30 = (a_12 * a_29);
        double a_31 = (a_9 + a_30);
        double a_32 = (200.0 * a_31);
        double a_33 = (a + a_32);

        U[ix + (argx38)][iy + (argx39)][iz + (argx40)] = a_33;
      }
    }
  }
} void

Formura_subroutine_4 (int argx0, int argx1, int argx2, int argx3, int argx4,
  int argx5, int argx6, int argx7, int argx8, int argx9, int argx10, int argx11,
  int argx12, int argx13, int argx14, int argx15, int argx16, int argx17,
  int argx18, int argx19, int argx20, int argx21, int argx22, int argx23,
  int argx24, int argx25, int argx26, int argx27, int argx28, int argx29,
  rsc_surface * __restrict argx30)
{
#pragma omp for collapse(2)
  for (int ix = argx0; ix < argx1; ++ix) {
    for (int iy = argx2; iy < argx3; ++iy) {
      for (int iz = argx4; iz < argx5; ++iz) {
        double a = U[ix + (argx6)][iy + (argx7)][iz + (argx8)];
        double a_0 = (1.0 / 900.0);
        double a_1 = (a_0 * a);
        double a_2 = V[ix + (argx9)][iy + (argx10)][iz + (argx11)];
        double a_3 = (a_1 * a_2);
        double a_4 = (a_3 * a_2);
        double a_5 = (-a_4);
        double a_6 = (1.0 / 86400.0);
        double a_7 = (1.0 - a);
        double a_8 = (a_6 * a_7);
        double a_9 = (a_5 + a_8);
        double a_10 = (0.1 * 2.3e-9);
        double a_11 = (1.0e-3 * 1.0e-3);
        double a_12 = (a_10 / a_11);
        double a_13 = U[ix + (argx12)][iy + (argx13)][iz + (argx14)];
        double a_14 = (a_13 - a);
        double a_15 = U[ix + (argx15)][iy + (argx16)][iz + (argx17)];
        double a_16 = (a - a_15);
        double a_17 = (a_14 - a_16);
        double a_18 = U[ix + (argx18)][iy + (argx19)][iz + (argx20)];
        double a_19 = (a_18 - a);
        double a_20 = U[ix + (argx21)][iy + (argx22)][iz + (argx23)];
        double a_21 = (a - a_20);
        double a_22 = (a_19 - a_21);
        double a_23 = (a_17 + a_22);
        double a_24 = U[ix + (argx24)][iy + (argx25)][iz + (argx26)];
        double a_25 = (a_24 - a);
        double a_26 = U[ix + (argx27)][iy + (argx28)][iz + (argx29)];
        double a_27 = (a - a_26);
        double a_28 = (a_25 - a_27);
        double a_29 = (a_23 + a_28);
        double a_30 = (a_12 * a_29);
        double a_31 = (a_9 + a_30);
        double a_32 = (200.0 * a_31);
        double a_33 = (a + a_32);

        argx30[ix][iy][iz] = (+a_33);
      }
    }
  }
} void

Formura_subroutine_5 (int argx0, int argx1, int argx2, int argx3, int argx4,
  int argx5, int argx6, int argx7, int argx8, int argx9, int argx10, int argx11,
  int argx12, int argx13, int argx14, int argx15, int argx16, int argx17,
  int argx18, int argx19, int argx20, int argx21, int argx22, int argx23,
  int argx24, int argx25, int argx26, int argx27, int argx28, int argx29,
  rsc_surface * __restrict argx30)
{
#pragma omp for collapse(2)
  for (int ix = argx0; ix < argx1; ++ix) {
    for (int iy = argx2; iy < argx3; ++iy) {
      for (int iz = argx4; iz < argx5; ++iz) {
        double a = V[ix + (argx6)][iy + (argx7)][iz + (argx8)];
        double a_0 = (1.0 / 900.0);
        double a_1 = U[ix + (argx9)][iy + (argx10)][iz + (argx11)];
        double a_2 = (a_0 * a_1);
        double a_3 = (a_2 * a);
        double a_4 = (a_3 * a);
        double a_5 = (6.0 / 86400.0);
        double a_6 = (a_5 * a);
        double a_7 = (a_4 - a_6);
        double a_8 = (1.0e-3 * 1.0e-3);
        double a_9 = (6.1e-11 / a_8);
        double a_10 = V[ix + (argx12)][iy + (argx13)][iz + (argx14)];
        double a_11 = (a_10 - a);
        double a_12 = V[ix + (argx15)][iy + (argx16)][iz + (argx17)];
        double a_13 = (a - a_12);
        double a_14 = (a_11 - a_13);
        double a_15 = V[ix + (argx18)][iy + (argx19)][iz + (argx20)];
        double a_16 = (a_15 - a);
        double a_17 = V[ix + (argx21)][iy + (argx22)][iz + (argx23)];
        double a_18 = (a - a_17);
        double a_19 = (a_16 - a_18);
        double a_20 = (a_14 + a_19);
        double a_21 = V[ix + (argx24)][iy + (argx25)][iz + (argx26)];
        double a_22 = (a_21 - a);
        double a_23 = V[ix + (argx27)][iy + (argx28)][iz + (argx29)];
        double a_24 = (a - a_23);
        double a_25 = (a_22 - a_24);
        double a_26 = (a_20 + a_25);
        double a_27 = (a_9 * a_26);
        double a_28 = (a_7 + a_27);
        double a_29 = (200.0 * a_28);
        double a_30 = (a + a_29);

        argx30[ix][iy][iz] = (+a_30);
      }
    }
  }
}
