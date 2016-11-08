/* List of some useful object identifiers (OIDs)
 * Copyright (C) 2003-2008 Andreas Steffen, Hochschule fuer Technik Rapperswil
 * 
 * This file has been automatically generated by the script oid.pl
 * Do not edit manually!
 */

#include <stdlib.h>

#include "oid.h"

const oid_t oid_names[] = {
 {0x02,                         7, 1,  0, "ITU-T Administration"           }, /*   0 */
 {  0x82,                       0, 1,  1, ""                               }, /*   1 */
 {    0x06,                     0, 1,  2, "Germany ITU-T member"           }, /*   2 */
 {      0x01,                   0, 1,  3, "Deutsche Telekom AG"            }, /*   3 */
 {        0x0A,                 0, 1,  4, ""                               }, /*   4 */
 {          0x07,               0, 1,  5, ""                               }, /*   5 */
 {            0x14,             0, 0,  6, "ND"                             }, /*   6 */
 {0x09,                        18, 1,  0, "data"                           }, /*   7 */
 {  0x92,                       0, 1,  1, ""                               }, /*   8 */
 {    0x26,                     0, 1,  2, ""                               }, /*   9 */
 {      0x89,                   0, 1,  3, ""                               }, /*  10 */
 {        0x93,                 0, 1,  4, ""                               }, /*  11 */
 {          0xF2,               0, 1,  5, ""                               }, /*  12 */
 {            0x2C,             0, 1,  6, ""                               }, /*  13 */
 {              0x64,           0, 1,  7, "pilot"                          }, /*  14 */
 {                0x01,         0, 1,  8, "pilotAttributeType"             }, /*  15 */
 {                  0x01,      17, 0,  9, "UID"                            }, /*  16 */
 {                  0x19,       0, 0,  9, "DC"                             }, /*  17 */
 {0x55,                        65, 1,  0, "X.500"                          }, /*  18 */
 {  0x04,                      37, 1,  1, "X.509"                          }, /*  19 */
 {    0x03,                    21, 0,  2, "CN"                             }, /*  20 */
 {    0x04,                    22, 0,  2, "S"                              }, /*  21 */
 {    0x05,                    23, 0,  2, "SN"                             }, /*  22 */
 {    0x06,                    24, 0,  2, "C"                              }, /*  23 */
 {    0x07,                    25, 0,  2, "L"                              }, /*  24 */
 {    0x08,                    26, 0,  2, "ST"                             }, /*  25 */
 {    0x0A,                    27, 0,  2, "O"                              }, /*  26 */
 {    0x0B,                    28, 0,  2, "OU"                             }, /*  27 */
 {    0x0C,                    29, 0,  2, "T"                              }, /*  28 */
 {    0x0D,                    30, 0,  2, "D"                              }, /*  29 */
 {    0x24,                    31, 0,  2, "userCertificate"                }, /*  30 */
 {    0x29,                    32, 0,  2, "N"                              }, /*  31 */
 {    0x2A,                    33, 0,  2, "G"                              }, /*  32 */
 {    0x2B,                    34, 0,  2, "I"                              }, /*  33 */
 {    0x2D,                    35, 0,  2, "ID"                             }, /*  34 */
 {    0x2E,                    36, 0,  2, "dnQualifier"                    }, /*  35 */
 {    0x48,                     0, 0,  2, "role"                           }, /*  36 */
 {  0x1D,                       0, 1,  1, "id-ce"                          }, /*  37 */
 {    0x09,                    39, 0,  2, "subjectDirectoryAttrs"          }, /*  38 */
 {    0x0E,                    40, 0,  2, "subjectKeyIdentifier"           }, /*  39 */
 {    0x0F,                    41, 0,  2, "keyUsage"                       }, /*  40 */
 {    0x10,                    42, 0,  2, "privateKeyUsagePeriod"          }, /*  41 */
 {    0x11,                    43, 0,  2, "subjectAltName"                 }, /*  42 */
 {    0x12,                    44, 0,  2, "issuerAltName"                  }, /*  43 */
 {    0x13,                    45, 0,  2, "basicConstraints"               }, /*  44 */
 {    0x14,                    46, 0,  2, "crlNumber"                      }, /*  45 */
 {    0x15,                    47, 0,  2, "reasonCode"                     }, /*  46 */
 {    0x17,                    48, 0,  2, "holdInstructionCode"            }, /*  47 */
 {    0x18,                    49, 0,  2, "invalidityDate"                 }, /*  48 */
 {    0x1B,                    50, 0,  2, "deltaCrlIndicator"              }, /*  49 */
 {    0x1C,                    51, 0,  2, "issuingDistributionPoint"       }, /*  50 */
 {    0x1D,                    52, 0,  2, "certificateIssuer"              }, /*  51 */
 {    0x1E,                    53, 0,  2, "nameConstraints"                }, /*  52 */
 {    0x1F,                    54, 0,  2, "crlDistributionPoints"          }, /*  53 */
 {    0x20,                    56, 1,  2, "certificatePolicies"            }, /*  54 */
 {      0x00,                   0, 0,  3, "anyPolicy"                      }, /*  55 */
 {    0x21,                    57, 0,  2, "policyMappings"                 }, /*  56 */
 {    0x23,                    58, 0,  2, "authorityKeyIdentifier"         }, /*  57 */
 {    0x24,                    59, 0,  2, "policyConstraints"              }, /*  58 */
 {    0x25,                    61, 1,  2, "extendedKeyUsage"               }, /*  59 */
 {      0x00,                   0, 0,  3, "anyExtendedKeyUsage"            }, /*  60 */
 {    0x2E,                    62, 0,  2, "freshestCRL"                    }, /*  61 */
 {    0x36,                    63, 0,  2, "inhibitAnyPolicy"               }, /*  62 */
 {    0x37,                    64, 0,  2, "targetInformation"              }, /*  63 */
 {    0x38,                     0, 0,  2, "noRevAvail"                     }, /*  64 */
 {0x2A,                       189, 1,  0, ""                               }, /*  65 */
 {  0x83,                      78, 1,  1, ""                               }, /*  66 */
 {    0x08,                     0, 1,  2, "jp"                             }, /*  67 */
 {      0x8C,                   0, 1,  3, ""                               }, /*  68 */
 {        0x9A,                 0, 1,  4, ""                               }, /*  69 */
 {          0x4B,               0, 1,  5, ""                               }, /*  70 */
 {            0x3D,             0, 1,  6, ""                               }, /*  71 */
 {              0x01,           0, 1,  7, "security"                       }, /*  72 */
 {                0x01,         0, 1,  8, "algorithm"                      }, /*  73 */
 {                  0x01,       0, 1,  9, "symm-encryption-alg"            }, /*  74 */
 {                    0x02,    76, 0, 10, "camellia128-cbc"                }, /*  75 */
 {                    0x03,    77, 0, 10, "camellia192-cbc"                }, /*  76 */
 {                    0x04,     0, 0, 10, "camellia256-cbc"                }, /*  77 */
 {  0x86,                       0, 1,  1, ""                               }, /*  78 */
 {    0x48,                     0, 1,  2, "us"                             }, /*  79 */
 {      0x86,                 148, 1,  3, ""                               }, /*  80 */
 {        0xF6,                86, 1,  4, ""                               }, /*  81 */
 {          0x7D,               0, 1,  5, "NortelNetworks"                 }, /*  82 */
 {            0x07,             0, 1,  6, "Entrust"                        }, /*  83 */
 {              0x41,           0, 1,  7, "nsn-ce"                         }, /*  84 */
 {                0x00,         0, 0,  8, "entrustVersInfo"                }, /*  85 */
 {        0xF7,                 0, 1,  4, ""                               }, /*  86 */
 {          0x0D,               0, 1,  5, "RSADSI"                         }, /*  87 */
 {            0x01,           143, 1,  6, "PKCS"                           }, /*  88 */
 {              0x01,         101, 1,  7, "PKCS-1"                         }, /*  89 */
 {                0x01,        91, 0,  8, "rsaEncryption"                  }, /*  90 */
 {                0x02,        92, 0,  8, "md2WithRSAEncryption"           }, /*  91 */
 {                0x04,        93, 0,  8, "md5WithRSAEncryption"           }, /*  92 */
 {                0x05,        94, 0,  8, "sha-1WithRSAEncryption"         }, /*  93 */
 {                0x07,        95, 0,  8, "id-RSAES-OAEP"                  }, /*  94 */
 {                0x08,        96, 0,  8, "id-mgf1"                        }, /*  95 */
 {                0x09,        97, 0,  8, "id-pSpecified"                  }, /*  96 */
 {                0x0B,        98, 0,  8, "sha256WithRSAEncryption"        }, /*  97 */
 {                0x0C,        99, 0,  8, "sha384WithRSAEncryption"        }, /*  98 */
 {                0x0D,       100, 0,  8, "sha512WithRSAEncryption"        }, /*  99 */
 {                0x0E,         0, 0,  8, "sha224WithRSAEncryption"        }, /* 100 */
 {              0x05,         106, 1,  7, "PKCS-5"                         }, /* 101 */
 {                0x03,       103, 0,  8, "pbeWithMD5AndDES-CBC"           }, /* 102 */
 {                0x0A,       104, 0,  8, "pbeWithSHA1AndDES-CBC"          }, /* 103 */
 {                0x0C,       105, 0,  8, "id-PBKDF2"                      }, /* 104 */
 {                0x0D,         0, 0,  8, "id-PBES2"                       }, /* 105 */
 {              0x07,         113, 1,  7, "PKCS-7"                         }, /* 106 */
 {                0x01,       108, 0,  8, "data"                           }, /* 107 */
 {                0x02,       109, 0,  8, "signedData"                     }, /* 108 */
 {                0x03,       110, 0,  8, "envelopedData"                  }, /* 109 */
 {                0x04,       111, 0,  8, "signedAndEnvelopedData"         }, /* 110 */
 {                0x05,       112, 0,  8, "digestedData"                   }, /* 111 */
 {                0x06,         0, 0,  8, "encryptedData"                  }, /* 112 */
 {              0x09,         127, 1,  7, "PKCS-9"                         }, /* 113 */
 {                0x01,       115, 0,  8, "E"                              }, /* 114 */
 {                0x02,       116, 0,  8, "unstructuredName"               }, /* 115 */
 {                0x03,       117, 0,  8, "contentType"                    }, /* 116 */
 {                0x04,       118, 0,  8, "messageDigest"                  }, /* 117 */
 {                0x05,       119, 0,  8, "signingTime"                    }, /* 118 */
 {                0x06,       120, 0,  8, "counterSignature"               }, /* 119 */
 {                0x07,       121, 0,  8, "challengePassword"              }, /* 120 */
 {                0x08,       122, 0,  8, "unstructuredAddress"            }, /* 121 */
 {                0x0E,       123, 0,  8, "extensionRequest"               }, /* 122 */
 {                0x0F,       124, 0,  8, "S/MIME Capabilities"            }, /* 123 */
 {                0x16,         0, 1,  8, "certTypes"                      }, /* 124 */
 {                  0x01,     126, 0,  9, "X.509"                          }, /* 125 */
 {                  0x02,       0, 0,  9, "SDSI"                           }, /* 126 */
 {              0x0c,           0, 1,  7, "PKCS-12"                        }, /* 127 */
 {                0x01,       135, 1,  8, "pbeIds"                         }, /* 128 */
 {                  0x01,     130, 0,  9, "pbeWithSHAAnd128BitRC4"         }, /* 129 */
 {                  0x02,     131, 0,  9, "pbeWithSHAAnd40BitRC4"          }, /* 130 */
 {                  0x03,     132, 0,  9, "pbeWithSHAAnd3-KeyTripleDES-CBC"}, /* 131 */
 {                  0x04,     133, 0,  9, "pbeWithSHAAnd2-KeyTripleDES-CBC"}, /* 132 */
 {                  0x05,     134, 0,  9, "pbeWithSHAAnd128BitRC2-CBC"     }, /* 133 */
 {                  0x06,       0, 0,  9, "pbeWithSHAAnd40BitRC2-CBC"      }, /* 134 */
 {                0x0a,         0, 1,  8, "PKCS-12v1"                      }, /* 135 */
 {                  0x01,       0, 1,  9, "bagIds"                         }, /* 136 */
 {                    0x01,   138, 0, 10, "keyBag"                         }, /* 137 */
 {                    0x02,   139, 0, 10, "pkcs8ShroudedKeyBag"            }, /* 138 */
 {                    0x03,   140, 0, 10, "certBag"                        }, /* 139 */
 {                    0x04,   141, 0, 10, "crlBag"                         }, /* 140 */
 {                    0x05,   142, 0, 10, "secretBag"                      }, /* 141 */
 {                    0x06,     0, 0, 10, "safeContentsBag"                }, /* 142 */
 {            0x02,           146, 1,  6, "digestAlgorithm"                }, /* 143 */
 {              0x02,         145, 0,  7, "md2"                            }, /* 144 */
 {              0x05,           0, 0,  7, "md5"                            }, /* 145 */
 {            0x03,             0, 1,  6, "encryptionAlgorithm"            }, /* 146 */
 {              0x07,           0, 0,  7, "3des-ede-cbc"                   }, /* 147 */
 {      0xCE,                   0, 1,  3, ""                               }, /* 148 */
 {        0x3D,                 0, 1,  4, "ansi-X9-62"                     }, /* 149 */
 {          0x02,             152, 1,  5, "id-publicKeyType"               }, /* 150 */
 {            0x01,             0, 0,  6, "id-ecPublicKey"                 }, /* 151 */
 {          0x03,             182, 1,  5, "ellipticCurve"                  }, /* 152 */
 {            0x00,           174, 1,  6, "c-TwoCurve"                     }, /* 153 */
 {              0x01,         155, 0,  7, "c2pnb163v1"                     }, /* 154 */
 {              0x02,         156, 0,  7, "c2pnb163v2"                     }, /* 155 */
 {              0x03,         157, 0,  7, "c2pnb163v3"                     }, /* 156 */
 {              0x04,         158, 0,  7, "c2pnb176w1"                     }, /* 157 */
 {              0x05,         159, 0,  7, "c2tnb191v1"                     }, /* 158 */
 {              0x06,         160, 0,  7, "c2tnb191v2"                     }, /* 159 */
 {              0x07,         161, 0,  7, "c2tnb191v3"                     }, /* 160 */
 {              0x08,         162, 0,  7, "c2onb191v4"                     }, /* 161 */
 {              0x09,         163, 0,  7, "c2onb191v5"                     }, /* 162 */
 {              0x0A,         164, 0,  7, "c2pnb208w1"                     }, /* 163 */
 {              0x0B,         165, 0,  7, "c2tnb239v1"                     }, /* 164 */
 {              0x0C,         166, 0,  7, "c2tnb239v2"                     }, /* 165 */
 {              0x0D,         167, 0,  7, "c2tnb239v3"                     }, /* 166 */
 {              0x0E,         168, 0,  7, "c2onb239v4"                     }, /* 167 */
 {              0x0F,         169, 0,  7, "c2onb239v5"                     }, /* 168 */
 {              0x10,         170, 0,  7, "c2pnb272w1"                     }, /* 169 */
 {              0x11,         171, 0,  7, "c2pnb304w1"                     }, /* 170 */
 {              0x12,         172, 0,  7, "c2tnb359v1"                     }, /* 171 */
 {              0x13,         173, 0,  7, "c2pnb368w1"                     }, /* 172 */
 {              0x14,           0, 0,  7, "c2tnb431r1"                     }, /* 173 */
 {            0x01,             0, 1,  6, "primeCurve"                     }, /* 174 */
 {              0x01,         176, 0,  7, "prime192v1"                     }, /* 175 */
 {              0x02,         177, 0,  7, "prime192v2"                     }, /* 176 */
 {              0x03,         178, 0,  7, "prime192v3"                     }, /* 177 */
 {              0x04,         179, 0,  7, "prime239v1"                     }, /* 178 */
 {              0x05,         180, 0,  7, "prime239v2"                     }, /* 179 */
 {              0x06,         181, 0,  7, "prime239v3"                     }, /* 180 */
 {              0x07,           0, 0,  7, "prime256v1"                     }, /* 181 */
 {          0x04,               0, 1,  5, "id-ecSigType"                   }, /* 182 */
 {            0x01,           184, 0,  6, "ecdsa-with-SHA1"                }, /* 183 */
 {            0x03,             0, 1,  6, "ecdsa-with-Specified"           }, /* 184 */
 {              0x01,         186, 0,  7, "ecdsa-with-SHA224"              }, /* 185 */
 {              0x02,         187, 0,  7, "ecdsa-with-SHA256"              }, /* 186 */
 {              0x03,         188, 0,  7, "ecdsa-with-SHA384"              }, /* 187 */
 {              0x04,           0, 0,  7, "ecdsa-with-SHA512"              }, /* 188 */
 {0x2B,                       372, 1,  0, ""                               }, /* 189 */
 {  0x06,                     286, 1,  1, "dod"                            }, /* 190 */
 {    0x01,                     0, 1,  2, "internet"                       }, /* 191 */
 {      0x04,                 237, 1,  3, "private"                        }, /* 192 */
 {        0x01,                 0, 1,  4, "enterprise"                     }, /* 193 */
 {          0x82,             207, 1,  5, ""                               }, /* 194 */
 {            0x37,           204, 1,  6, "Microsoft"                      }, /* 195 */
 {              0x0A,         200, 1,  7, ""                               }, /* 196 */
 {                0x03,         0, 1,  8, ""                               }, /* 197 */
 {                  0x03,     199, 0,  9, "msSGC"                          }, /* 198 */
 {                  0x04,       0, 0,  9, "msEncryptingFileSystem"         }, /* 199 */
 {              0x14,           0, 1,  7, "msEnrollmentInfrastructure"     }, /* 200 */
 {                0x02,         0, 1,  8, "msCertificateTypeExtension"     }, /* 201 */
 {                  0x02,     203, 0,  9, "msSmartcardLogon"               }, /* 202 */
 {                  0x03,       0, 0,  9, "msUPN"                          }, /* 203 */
 {            0xA0,             0, 1,  6, ""                               }, /* 204 */
 {              0x2A,           0, 1,  7, "ITA"                            }, /* 205 */
 {                0x01,         0, 0,  8, "strongSwan"                     }, /* 206 */
 {          0x89,             214, 1,  5, ""                               }, /* 207 */
 {            0x31,             0, 1,  6, ""                               }, /* 208 */
 {              0x01,           0, 1,  7, ""                               }, /* 209 */
 {                0x01,         0, 1,  8, ""                               }, /* 210 */
 {                  0x02,       0, 1,  9, ""                               }, /* 211 */
 {                    0x02,     0, 1, 10, ""                               }, /* 212 */
 {                      0x4B,   0, 0, 11, "TCGID"                          }, /* 213 */
 {          0xc1,               0, 1,  5, ""                               }, /* 214 */
 {            0x16,             0, 1,  6, "ntruCryptosystems"              }, /* 215 */
 {              0x01,           0, 1,  7, "eess"                           }, /* 216 */
 {                0x01,         0, 1,  8, "eess1"                          }, /* 217 */
 {                  0x01,     222, 1,  9, "eess1-algs"                     }, /* 218 */
 {                    0x01,   220, 0, 10, "ntru-EESS1v1-SVES"              }, /* 219 */
 {                    0x02,   221, 0, 10, "ntru-EESS1v1-SVSSA"             }, /* 220 */
 {                    0x03,     0, 0, 10, "ntru-EESS1v1-NTRUSign"          }, /* 221 */
 {                  0x02,     236, 1,  9, "eess1-params"                   }, /* 222 */
 {                    0x01,   224, 0, 10, "ees251ep1"                      }, /* 223 */
 {                    0x02,   225, 0, 10, "ees347ep1"                      }, /* 224 */
 {                    0x03,   226, 0, 10, "ees503ep1"                      }, /* 225 */
 {                    0x07,   227, 0, 10, "ees251sp2"                      }, /* 226 */
 {                    0x0C,   228, 0, 10, "ees251ep4"                      }, /* 227 */
 {                    0x0D,   229, 0, 10, "ees251ep5"                      }, /* 228 */
 {                    0x0E,   230, 0, 10, "ees251sp3"                      }, /* 229 */
 {                    0x0F,   231, 0, 10, "ees251sp4"                      }, /* 230 */
 {                    0x10,   232, 0, 10, "ees251sp5"                      }, /* 231 */
 {                    0x11,   233, 0, 10, "ees251sp6"                      }, /* 232 */
 {                    0x12,   234, 0, 10, "ees251sp7"                      }, /* 233 */
 {                    0x13,   235, 0, 10, "ees251sp8"                      }, /* 234 */
 {                    0x14,     0, 0, 10, "ees251sp9"                      }, /* 235 */
 {                  0x03,       0, 0,  9, "eess1-encodingMethods"          }, /* 236 */
 {      0x05,                   0, 1,  3, "security"                       }, /* 237 */
 {        0x05,                 0, 1,  4, "mechanisms"                     }, /* 238 */
 {          0x07,             283, 1,  5, "id-pkix"                        }, /* 239 */
 {            0x01,           244, 1,  6, "id-pe"                          }, /* 240 */
 {              0x01,         242, 0,  7, "authorityInfoAccess"            }, /* 241 */
 {              0x03,         243, 0,  7, "qcStatements"                   }, /* 242 */
 {              0x07,           0, 0,  7, "ipAddrBlocks"                   }, /* 243 */
 {            0x02,           247, 1,  6, "id-qt"                          }, /* 244 */
 {              0x01,         246, 0,  7, "cps"                            }, /* 245 */
 {              0x02,           0, 0,  7, "unotice"                        }, /* 246 */
 {            0x03,           257, 1,  6, "id-kp"                          }, /* 247 */
 {              0x01,         249, 0,  7, "serverAuth"                     }, /* 248 */
 {              0x02,         250, 0,  7, "clientAuth"                     }, /* 249 */
 {              0x03,         251, 0,  7, "codeSigning"                    }, /* 250 */
 {              0x04,         252, 0,  7, "emailProtection"                }, /* 251 */
 {              0x05,         253, 0,  7, "ipsecEndSystem"                 }, /* 252 */
 {              0x06,         254, 0,  7, "ipsecTunnel"                    }, /* 253 */
 {              0x07,         255, 0,  7, "ipsecUser"                      }, /* 254 */
 {              0x08,         256, 0,  7, "timeStamping"                   }, /* 255 */
 {              0x09,           0, 0,  7, "ocspSigning"                    }, /* 256 */
 {            0x08,           265, 1,  6, "id-otherNames"                  }, /* 257 */
 {              0x01,         259, 0,  7, "personalData"                   }, /* 258 */
 {              0x02,         260, 0,  7, "userGroup"                      }, /* 259 */
 {              0x03,         261, 0,  7, "id-on-permanentIdentifier"      }, /* 260 */
 {              0x04,         262, 0,  7, "id-on-hardwareModuleName"       }, /* 261 */
 {              0x05,         263, 0,  7, "xmppAddr"                       }, /* 262 */
 {              0x06,         264, 0,  7, "id-on-SIM"                      }, /* 263 */
 {              0x07,           0, 0,  7, "id-on-dnsSRV"                   }, /* 264 */
 {            0x0A,           270, 1,  6, "id-aca"                         }, /* 265 */
 {              0x01,         267, 0,  7, "authenticationInfo"             }, /* 266 */
 {              0x02,         268, 0,  7, "accessIdentity"                 }, /* 267 */
 {              0x03,         269, 0,  7, "chargingIdentity"               }, /* 268 */
 {              0x04,           0, 0,  7, "group"                          }, /* 269 */
 {            0x0B,           271, 0,  6, "subjectInfoAccess"              }, /* 270 */
 {            0x30,             0, 1,  6, "id-ad"                          }, /* 271 */
 {              0x01,         280, 1,  7, "ocsp"                           }, /* 272 */
 {                0x01,       274, 0,  8, "basic"                          }, /* 273 */
 {                0x02,       275, 0,  8, "nonce"                          }, /* 274 */
 {                0x03,       276, 0,  8, "crl"                            }, /* 275 */
 {                0x04,       277, 0,  8, "response"                       }, /* 276 */
 {                0x05,       278, 0,  8, "noCheck"                        }, /* 277 */
 {                0x06,       279, 0,  8, "archiveCutoff"                  }, /* 278 */
 {                0x07,         0, 0,  8, "serviceLocator"                 }, /* 279 */
 {              0x02,         281, 0,  7, "caIssuers"                      }, /* 280 */
 {              0x03,         282, 0,  7, "timeStamping"                   }, /* 281 */
 {              0x05,           0, 0,  7, "caRepository"                   }, /* 282 */
 {          0x08,               0, 1,  5, "ipsec"                          }, /* 283 */
 {            0x02,             0, 1,  6, "certificate"                    }, /* 284 */
 {              0x02,           0, 0,  7, "iKEIntermediate"                }, /* 285 */
 {  0x0E,                     292, 1,  1, "oiw"                            }, /* 286 */
 {    0x03,                     0, 1,  2, "secsig"                         }, /* 287 */
 {      0x02,                   0, 1,  3, "algorithms"                     }, /* 288 */
 {        0x07,               290, 0,  4, "des-cbc"                        }, /* 289 */
 {        0x1A,               291, 0,  4, "sha-1"                          }, /* 290 */
 {        0x1D,                 0, 0,  4, "sha-1WithRSASignature"          }, /* 291 */
 {  0x24,                     338, 1,  1, "TeleTrusT"                      }, /* 292 */
 {    0x03,                     0, 1,  2, "algorithm"                      }, /* 293 */
 {      0x03,                   0, 1,  3, "signatureAlgorithm"             }, /* 294 */
 {        0x01,               299, 1,  4, "rsaSignature"                   }, /* 295 */
 {          0x02,             297, 0,  5, "rsaSigWithripemd160"            }, /* 296 */
 {          0x03,             298, 0,  5, "rsaSigWithripemd128"            }, /* 297 */
 {          0x04,               0, 0,  5, "rsaSigWithripemd256"            }, /* 298 */
 {        0x02,                 0, 1,  4, "ecSign"                         }, /* 299 */
 {          0x01,             301, 0,  5, "ecSignWithsha1"                 }, /* 300 */
 {          0x02,             302, 0,  5, "ecSignWithripemd160"            }, /* 301 */
 {          0x03,             303, 0,  5, "ecSignWithmd2"                  }, /* 302 */
 {          0x04,             304, 0,  5, "ecSignWithmd5"                  }, /* 303 */
 {          0x05,             321, 1,  5, "ttt-ecg"                        }, /* 304 */
 {            0x01,           309, 1,  6, "fieldType"                      }, /* 305 */
 {              0x01,           0, 1,  7, "characteristictwoField"         }, /* 306 */
 {                0x01,         0, 1,  8, "basisType"                      }, /* 307 */
 {                  0x01,       0, 0,  9, "ipBasis"                        }, /* 308 */
 {            0x02,           311, 1,  6, "keyType"                        }, /* 309 */
 {              0x01,           0, 0,  7, "ecgPublicKey"                   }, /* 310 */
 {            0x03,           312, 0,  6, "curve"                          }, /* 311 */
 {            0x04,           319, 1,  6, "signatures"                     }, /* 312 */
 {              0x01,         314, 0,  7, "ecgdsa-with-RIPEMD160"          }, /* 313 */
 {              0x02,         315, 0,  7, "ecgdsa-with-SHA1"               }, /* 314 */
 {              0x03,         316, 0,  7, "ecgdsa-with-SHA224"             }, /* 315 */
 {              0x04,         317, 0,  7, "ecgdsa-with-SHA256"             }, /* 316 */
 {              0x05,         318, 0,  7, "ecgdsa-with-SHA384"             }, /* 317 */
 {              0x06,           0, 0,  7, "ecgdsa-with-SHA512"             }, /* 318 */
 {            0x05,             0, 1,  6, "module"                         }, /* 319 */
 {              0x01,           0, 0,  7, "1"                              }, /* 320 */
 {          0x08,               0, 1,  5, "ecStdCurvesAndGeneration"       }, /* 321 */
 {            0x01,             0, 1,  6, "ellipticCurve"                  }, /* 322 */
 {              0x01,           0, 1,  7, "versionOne"                     }, /* 323 */
 {                0x01,       325, 0,  8, "brainpoolP160r1"                }, /* 324 */
 {                0x02,       326, 0,  8, "brainpoolP160t1"                }, /* 325 */
 {                0x03,       327, 0,  8, "brainpoolP192r1"                }, /* 326 */
 {                0x04,       328, 0,  8, "brainpoolP192t1"                }, /* 327 */
 {                0x05,       329, 0,  8, "brainpoolP224r1"                }, /* 328 */
 {                0x06,       330, 0,  8, "brainpoolP224t1"                }, /* 329 */
 {                0x07,       331, 0,  8, "brainpoolP256r1"                }, /* 330 */
 {                0x08,       332, 0,  8, "brainpoolP256t1"                }, /* 331 */
 {                0x09,       333, 0,  8, "brainpoolP320r1"                }, /* 332 */
 {                0x0A,       334, 0,  8, "brainpoolP320t1"                }, /* 333 */
 {                0x0B,       335, 0,  8, "brainpoolP384r1"                }, /* 334 */
 {                0x0C,       336, 0,  8, "brainpoolP384t1"                }, /* 335 */
 {                0x0D,       337, 0,  8, "brainpoolP512r1"                }, /* 336 */
 {                0x0E,         0, 0,  8, "brainpoolP512t1"                }, /* 337 */
 {  0x81,                       0, 1,  1, ""                               }, /* 338 */
 {    0x04,                     0, 1,  2, "Certicom"                       }, /* 339 */
 {      0x00,                   0, 1,  3, "curve"                          }, /* 340 */
 {        0x01,               342, 0,  4, "sect163k1"                      }, /* 341 */
 {        0x02,               343, 0,  4, "sect163r1"                      }, /* 342 */
 {        0x03,               344, 0,  4, "sect239k1"                      }, /* 343 */
 {        0x04,               345, 0,  4, "sect113r1"                      }, /* 344 */
 {        0x05,               346, 0,  4, "sect113r2"                      }, /* 345 */
 {        0x06,               347, 0,  4, "secp112r1"                      }, /* 346 */
 {        0x07,               348, 0,  4, "secp112r2"                      }, /* 347 */
 {        0x08,               349, 0,  4, "secp160r1"                      }, /* 348 */
 {        0x09,               350, 0,  4, "secp160k1"                      }, /* 349 */
 {        0x0A,               351, 0,  4, "secp256k1"                      }, /* 350 */
 {        0x0F,               352, 0,  4, "sect163r2"                      }, /* 351 */
 {        0x10,               353, 0,  4, "sect283k1"                      }, /* 352 */
 {        0x11,               354, 0,  4, "sect283r1"                      }, /* 353 */
 {        0x16,               355, 0,  4, "sect131r1"                      }, /* 354 */
 {        0x17,               356, 0,  4, "sect131r2"                      }, /* 355 */
 {        0x18,               357, 0,  4, "sect193r1"                      }, /* 356 */
 {        0x19,               358, 0,  4, "sect193r2"                      }, /* 357 */
 {        0x1A,               359, 0,  4, "sect233k1"                      }, /* 358 */
 {        0x1B,               360, 0,  4, "sect233r1"                      }, /* 359 */
 {        0x1C,               361, 0,  4, "secp128r1"                      }, /* 360 */
 {        0x1D,               362, 0,  4, "secp128r2"                      }, /* 361 */
 {        0x1E,               363, 0,  4, "secp160r2"                      }, /* 362 */
 {        0x1F,               364, 0,  4, "secp192k1"                      }, /* 363 */
 {        0x20,               365, 0,  4, "secp224k1"                      }, /* 364 */
 {        0x21,               366, 0,  4, "secp224r1"                      }, /* 365 */
 {        0x22,               367, 0,  4, "secp384r1"                      }, /* 366 */
 {        0x23,               368, 0,  4, "secp521r1"                      }, /* 367 */
 {        0x24,               369, 0,  4, "sect409k1"                      }, /* 368 */
 {        0x25,               370, 0,  4, "sect409r1"                      }, /* 369 */
 {        0x26,               371, 0,  4, "sect571k1"                      }, /* 370 */
 {        0x27,                 0, 0,  4, "sect571r1"                      }, /* 371 */
 {0x60,                       420, 1,  0, ""                               }, /* 372 */
 {  0x86,                       0, 1,  1, ""                               }, /* 373 */
 {    0x48,                     0, 1,  2, ""                               }, /* 374 */
 {      0x01,                   0, 1,  3, "organization"                   }, /* 375 */
 {        0x65,               396, 1,  4, "gov"                            }, /* 376 */
 {          0x03,               0, 1,  5, "csor"                           }, /* 377 */
 {            0x04,             0, 1,  6, "nistalgorithm"                  }, /* 378 */
 {              0x01,         389, 1,  7, "aes"                            }, /* 379 */
 {                0x02,       381, 0,  8, "id-aes128-CBC"                  }, /* 380 */
 {                0x06,       382, 0,  8, "id-aes128-GCM"                  }, /* 381 */
 {                0x07,       383, 0,  8, "id-aes128-CCM"                  }, /* 382 */
 {                0x16,       384, 0,  8, "id-aes192-CBC"                  }, /* 383 */
 {                0x1A,       385, 0,  8, "id-aes192-GCM"                  }, /* 384 */
 {                0x1B,       386, 0,  8, "id-aes192-CCM"                  }, /* 385 */
 {                0x2A,       387, 0,  8, "id-aes256-CBC"                  }, /* 386 */
 {                0x2E,       388, 0,  8, "id-aes256-GCM"                  }, /* 387 */
 {                0x2F,         0, 0,  8, "id-aes256-CCM"                  }, /* 388 */
 {              0x02,           0, 1,  7, "hashalgs"                       }, /* 389 */
 {                0x01,       391, 0,  8, "id-SHA-256"                     }, /* 390 */
 {                0x02,       392, 0,  8, "id-SHA-384"                     }, /* 391 */
 {                0x03,       393, 0,  8, "id-SHA-512"                     }, /* 392 */
 {                0x04,       394, 0,  8, "id-SHA-224"                     }, /* 393 */
 {                0x05,       395, 0,  8, "id-SHA-512-224"                 }, /* 394 */
 {                0x06,         0, 0,  8, "id-SHA-512-256"                 }, /* 395 */
 {        0x86,                 0, 1,  4, ""                               }, /* 396 */
 {          0xf8,               0, 1,  5, ""                               }, /* 397 */
 {            0x42,           410, 1,  6, "netscape"                       }, /* 398 */
 {              0x01,         405, 1,  7, ""                               }, /* 399 */
 {                0x01,       401, 0,  8, "nsCertType"                     }, /* 400 */
 {                0x03,       402, 0,  8, "nsRevocationUrl"                }, /* 401 */
 {                0x04,       403, 0,  8, "nsCaRevocationUrl"              }, /* 402 */
 {                0x08,       404, 0,  8, "nsCaPolicyUrl"                  }, /* 403 */
 {                0x0d,         0, 0,  8, "nsComment"                      }, /* 404 */
 {              0x03,         408, 1,  7, "directory"                      }, /* 405 */
 {                0x01,         0, 1,  8, ""                               }, /* 406 */
 {                  0x03,       0, 0,  9, "employeeNumber"                 }, /* 407 */
 {              0x04,           0, 1,  7, "policy"                         }, /* 408 */
 {                0x01,         0, 0,  8, "nsSGC"                          }, /* 409 */
 {            0x45,             0, 1,  6, "verisign"                       }, /* 410 */
 {              0x01,           0, 1,  7, "pki"                            }, /* 411 */
 {                0x09,         0, 1,  8, "attributes"                     }, /* 412 */
 {                  0x02,     414, 0,  9, "messageType"                    }, /* 413 */
 {                  0x03,     415, 0,  9, "pkiStatus"                      }, /* 414 */
 {                  0x04,     416, 0,  9, "failInfo"                       }, /* 415 */
 {                  0x05,     417, 0,  9, "senderNonce"                    }, /* 416 */
 {                  0x06,     418, 0,  9, "recipientNonce"                 }, /* 417 */
 {                  0x07,     419, 0,  9, "transID"                        }, /* 418 */
 {                  0x08,       0, 0,  9, "extensionReq"                   }, /* 419 */
 {0x67,                         0, 1,  0, ""                               }, /* 420 */
 {  0x81,                       0, 1,  1, ""                               }, /* 421 */
 {    0x05,                     0, 1,  2, ""                               }, /* 422 */
 {      0x02,                   0, 1,  3, "tcg-attribute"                  }, /* 423 */
 {        0x01,               425, 0,  4, "tcg-at-tpmManufacturer"         }, /* 424 */
 {        0x02,               426, 0,  4, "tcg-at-tpmModel"                }, /* 425 */
 {        0x03,               427, 0,  4, "tcg-at-tpmVersion"              }, /* 426 */
 {        0x0F,                 0, 0,  4, "tcg-at-tpmIdLabel"              }  /* 427 */
};
