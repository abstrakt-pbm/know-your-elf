#pragma once

enum EI_CLASS {
    ELFCLASSNONE,
    ELFCLASS32,
    ELFCLASS64
};

enum EI_DATA {
    ELFDATANONE,
    ELFDATA2LSB,
    ELFDATA2MSB
};

enum EI_VERSION {
    EV_NONE,
    EV_CURRENT
};

enum EI_OSABI {
    ELFOSABI_NONE,
    ELFOSABI_HPUX,
    ELFOSABI_NETBSD,
    ELFOSABI_GNU,
    ELFOSABI_SOLARIS,
    ELFOSABI_AIX,
    ELFOSABI_IRIX,
    ELFOSABI_FREEBSD,
    ELFOSABI_TRU64,
    ELFOSABI_MODESTO,
    ELFOSABI_OPENBSD,
    ELFOSABI_OPENVMS,
    ELFOSABI_NSK,
    ELFOSABI_AROS,
    ELFOSABI_FENIXOS,
    ELFOSABI_CLOUDABI,
    ELFOSABI_OPENVOS
};

enum E_TYPE {
    ET_NONE,
    ET_REL,
    ET_EXEC,
    ET_DYN,
    ET_CORE,
    ET_LOOS = 65024,
    ET_HIOS = 65279,
    ET_LOPROC = 65280,
    ET_HIPROC = 65535,
};

enum E_MACHINE {
    EM_NONE = 0x0,
    EM_M32 = 0x01,
    EM_SPARC = 0x02,
    EM_386 = 0x03,
    EM_68K = 0x04,
    EM_88K = 0x05,
    EM_IAMCU = 0x06,
    EM_860 = 0x07,
    EM_MIPS = 0x08,
    EM_S370 = 0x09,
    EM_MIPS_RS3_LE = 0x0A,
    EM_PARISC = 0x0F,
    EM_960 = 0x13,
    EM_PPC = 0x14,
    EM_PPC64 = 0x15,
    EM_S390 = 0x16,	
    EM_SPU = 0x17,
    EM_V800 = 0x24,
    EM_FR20 = 0x25,
    EM_RH32 = 0x26,
    EM_RCE = 0x27,
    EM_OLD_ALPHA = 0x28,
    EM_SH = 0x2A,
    EM_SPARCV9 = 0x2B,
    EM_TRICORE = 0x2C,
    EM_ARC = 0x2D,
    EM_H8_300 = 0x2E,
    EM_H8_300H = 0x2F,
    EM_H8S = 0x30,
    EM_H8_500 = 0x31,
    EM_IA_64 = 0x32,
    EM_MIPS_X = 0x33,
    EM_COLDFIRE = 0x34,
    EM_68HC12 = 0x35,
    EM_MMA = 0x36,
    EM_PCP = 0x37,
    EM_NCPU = 0x38,
    EM_NDR1 = 0x39,
    EM_STARCORE = 0x3A,
    EM_ME16 = 0x3B,
    EM_ST100 = 0x3C,
    EM_TINYJ = 0x3D,
    EM_X86_64 = 0x3E,
    EM_MCST_ELBRUS = 0xAF,
    EM_TI_C6000 = 0x8C,
    EM_AARCH64 = 0xB7,
    EM_RISCV = 0xF3,
    EM_BPF = 0xF7,
    EM_65816 = 0x101
};

typedef struct {
    EI_CLASS ei_class;
    EI_DATA ei_data;
    EI_VERSION ei_version;
    EI_OSABI ei_osabi;
    unsigned int ei_abiversion;
    E_TYPE e_type;
    E_MACHINE e_machine;
    int e_entry;
    int e_phoff;
    int e_shoff;
    int e_flags;
    int e_ehsize;
    int e_phentsize;
    int e_phnum;
    int e_shentsize;
    int e_shnum;
    int e_shstrndx;
} ELF_HEADER;


class ELF {
public:
    ELF();

};