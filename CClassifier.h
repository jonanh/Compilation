/////////////////
//
// Práctica de Compilación I (Curso 2010-2011)
//
//  FICHERO:        CClassifier.h
//  OBJETIVO:       Declaración del clasificador caracter -> grupo.
//  LICENCIA:       Mira el fichero LICENSE en el directorio raíz.
//  AUTORES:        El equipo del JAG.
//

#ifndef CCLASSIFIER_H
#define	CCLASSIFIER_H

class CClassifier {
public:
    enum ECharacterGroup
    {
        ALPHA = 0,
        DIGIT,
        eE,
        DOT,
        UNDER,
        EQUAL,
        LT,
        GT,
        PLUS,
        MINUS,
        STAR,
        SLASH,
        CR,
        LF,
        SPACE,
        SEP,
        UNKN, // desconocido
        GROUP_MAX
    };

private:
    static const ECharacterGroup ms_eClassifier [ 256 ];

public:
    ECharacterGroup operator[] ( unsigned char ucChar ) const
    {
        return ms_eClassifier [ ucChar ];
    }
};

#endif	/* CCLASSIFIER_H */

