
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_195 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_89_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_89_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_89_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_89_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_89_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_89_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_89_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_89_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_89_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_89_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_89_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (28)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_89_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_89_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (28)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_89_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (262)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_89_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (28)][iy + (2)][iz + (262)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_89_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (28)][iy + (38)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_89_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (28)][iy + (38)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_89_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (28)][iy + (38)][iz + (262)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_89_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_90_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_90_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_90_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_90_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_90_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_90_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_90_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_90_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_90_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_90_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_90_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (28)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_90_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_90_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (28)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_90_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (262)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_90_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (28)][iy + (2)][iz + (262)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_90_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (28)][iy + (38)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_90_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (28)][iy + (38)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_90_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (28)][iy + (38)][iz + (262)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_90_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 30, 2, 40, 2, 264, Rsc3, -1, -1, -1, Rsc2, -1, -1,
      -1, Rsc3, 0, -1, -1, Rsc3, -2, -1, -1, Rsc3, -1, 0, -1, Rsc3, -1, -2, -1,
      Rsc3, -1, -1, 0, Rsc3, -1, -1, -2, Rsc1);

  }
}

void
Formura_internal_196 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 30, 2, 40, 2, 264, Rsc2, -1, -1, -1, Rsc3, -1, -1,
      -1, Rsc2, 0, -1, -1, Rsc2, -2, -1, -1, Rsc2, -1, 0, -1, Rsc2, -1, -2, -1,
      Rsc2, -1, -1, 0, Rsc2, -1, -1, -2, Rsc0);

  }
}

void
Formura_internal_197 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_91_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_91_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_91_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_91_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_91_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_91_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_91_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_91_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_91_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_91_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_91_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (30)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_91_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_91_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (30)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_91_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (264)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_91_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (30)][iy + (2)][iz + (264)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_91_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (30)][iy + (40)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_91_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (30)][iy + (40)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_91_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (30)][iy + (40)][iz + (264)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_91_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_92_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_92_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_92_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_92_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_92_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_92_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_92_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_92_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_92_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_92_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_92_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (30)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_92_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_92_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (30)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_92_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (264)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_92_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (30)][iy + (2)][iz + (264)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_92_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (30)][iy + (40)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_92_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (30)][iy + (40)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_92_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (30)][iy + (40)][iz + (264)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_92_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (44, 74, 34, 74, 258, 522, Rsc1, -43, -33, -257, Rsc0,
      -43, -33, -257, Rsc1, -42, -33, -257, Rsc1, -44, -33, -257, Rsc1, -43,
      -32, -257, Rsc1, -43, -34, -257, Rsc1, -43, -33, -256, Rsc1, -43, -33,
      -258, -8, -8, -8);

  }
}

void
Formura_internal_198 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (44, 74, 34, 74, 258, 522, Rsc0, -43, -33, -257, Rsc1,
      -43, -33, -257, Rsc0, -42, -33, -257, Rsc0, -44, -33, -257, Rsc0, -43,
      -32, -257, Rsc0, -43, -34, -257, Rsc0, -43, -33, -256, Rsc0, -43, -33,
      -258, -8, -8, -8);

  }
}

void
Formura_internal_199 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_m1_St_U[ix][iy][iz] =
            U[ix + (64)][iy + (64)][iz + (512)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_m1_0_St_U[ix][iy][iz] = U[ix + (64)][iy + (64)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 64; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_m1_St_U[ix][iy][iz] = U[ix + (64)][iy + (2)][iz + (512)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 64; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_1_Send.Ridge_m1_0_0_St_U[ix][iy][iz] =
            U[ix + (64)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_m1_St_U[ix][iy][iz] = U[ix + (2)][iy + (64)][iz + (512)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_1_Send.Ridge_0_m1_0_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (64)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 64; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_1_0_Send.Ridge_0_0_m1_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (2)][iz + (512)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_m1_St_V[ix][iy][iz] =
            V[ix + (64)][iy + (64)][iz + (512)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_m1_0_St_V[ix][iy][iz] = V[ix + (64)][iy + (64)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 64; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_m1_St_V[ix][iy][iz] = V[ix + (64)][iy + (2)][iz + (512)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 64; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_1_Send.Ridge_m1_0_0_St_V[ix][iy][iz] =
            V[ix + (64)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_m1_St_V[ix][iy][iz] = V[ix + (2)][iy + (64)][iz + (512)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_1_Send.Ridge_0_m1_0_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (64)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 64; ++ix) {
      for (int iy = 0; iy < 64; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_1_0_Send.Ridge_0_0_m1_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (2)][iz + (512)];
        }
      }
    }

  }
}

void
Formura_internal_20 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 15, 0, 26, 0, 250, Rsc3, 1, 1, 1, Rsc2, 1, 1, 1,
      Rsc3, 2, 1, 1, Rsc3, 0, 1, 1, Rsc3, 1, 2, 1, Rsc3, 1, 0, 1, Rsc3, 1, 1, 2,
      Rsc3, 1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (24)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (24)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_92_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_92_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_92_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_92_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_92_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_92_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_92_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_92_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_92_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_92_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (13)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_92_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_92_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_92_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_92_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (24)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_92_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_92_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_92_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_92_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_92_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_200 ()
{
#pragma omp parallel
  {
    Formura_subroutine_4 (0, 27, 0, 38, 0, 262, 38, 27, 251, 38, 27, 251, 39,
      27, 251, 37, 27, 251, 38, 28, 251, 38, 26, 251, 38, 27, 252, 38, 27, 250,
      Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_m1_Om_79_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_79_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_m1_0_Om_79_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_m1_Om_79_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_m1_Om_79_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_79_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_79_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_0_0_Om_79_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_1_Send.
            Ridge_m1_0_0_Om_79_r_2_1_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_79_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_m1_Om_79_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_79_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_79_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_79_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_1_Send.
            Ridge_0_m1_0_Om_79_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_79_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_0_m1_Om_79_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_79_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_1_0_Send.
            Ridge_0_0_m1_Om_79_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_79_r_2_1_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_201 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 27, 0, 38, 0, 262, 38, 27, 251, 38, 27, 251, 39,
      27, 251, 37, 27, 251, 38, 28, 251, 38, 26, 251, 38, 27, 252, 38, 27, 250,
      Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_m1_Om_80_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_80_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_m1_0_Om_80_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_m1_Om_80_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_m1_Om_80_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_80_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_80_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_0_0_Om_80_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_1_Send.
            Ridge_m1_0_0_Om_80_r_2_1_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (25)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_80_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_m1_Om_80_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_80_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_80_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_80_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_1_Send.
            Ridge_0_m1_0_Om_80_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (36)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_80_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_0_m1_Om_80_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_80_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_1_0_Send.
            Ridge_0_0_m1_Om_80_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 27; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_80_r_2_1_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_202 ()
{
#pragma omp parallel
  {
    Formura_subroutine_2 (0, 25, 0, 36, 0, 260, Rsc0, 1, 1, 1, Rsc1, 1, 1, 1,
      Rsc0, 2, 1, 1, Rsc0, 0, 1, 1, Rsc0, 1, 2, 1, Rsc0, 1, 0, 1, Rsc0, 1, 1, 2,
      Rsc0, 1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_m1_Om_81_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_81_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_m1_0_Om_81_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_m1_Om_81_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_m1_Om_81_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_81_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_81_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_0_0_Om_81_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_1_Send.
            Ridge_m1_0_0_Om_81_r_2_1_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_81_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_m1_Om_81_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_81_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_81_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_81_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_1_Send.
            Ridge_0_m1_0_Om_81_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_81_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_0_m1_Om_81_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_81_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_1_0_Send.
            Ridge_0_0_m1_Om_81_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_81_r_2_1_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_203 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 25, 0, 36, 0, 260, Rsc1, 1, 1, 1, Rsc0, 1, 1, 1,
      Rsc1, 2, 1, 1, Rsc1, 0, 1, 1, Rsc1, 1, 2, 1, Rsc1, 1, 0, 1, Rsc1, 1, 1, 2,
      Rsc1, 1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_m1_Om_82_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_m1_0_Om_82_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_m1_0_Om_82_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_m1_Om_82_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_m1_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_m1_Om_82_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_0_Send.
            Ridge_m1_0_0_Om_82_r_2_1_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_0_Send.
            Ridge_m1_0_0_Om_82_r_2_1_1_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_0_1_Send.
            Ridge_m1_0_0_Om_82_r_2_1_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_m1_0_0_src_2_1_1_dest_0_1_1_Send.
            Ridge_m1_0_0_Om_82_r_2_1_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (23)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_m1_Om_82_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_m1_Om_82_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_m1_0_Om_82_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_m1_0_Om_82_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_1_0_1_Send.
            Ridge_0_m1_0_Om_82_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_m1_0_src_2_1_1_dest_2_0_1_Send.
            Ridge_0_m1_0_Om_82_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (34)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_82_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_0_0_Send.
            Ridge_0_0_m1_Om_82_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_1_1_0_Send.
            Ridge_0_0_m1_Om_82_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_2_1_1_dest_2_1_0_Send.
            Ridge_0_0_m1_Om_82_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_1_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_1_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_1_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 25; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_1_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_2_1_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}
