CLASS_NAME="$1"
UPPERCASE_CLASS_NAME=$(echo $CLASS_NAME | tr '[:lower:]' '[:upper:]')

cat > ${CLASS_NAME}.hpp << EOF
#include <iostream>
#include <map>

#ifndef ${UPPERCASE_CLASS_NAME}_HPP
# define ${UPPERCASE_CLASS_NAME}_HPP

class ${CLASS_NAME} {

public:

${CLASS_NAME}();
~${CLASS_NAME}();
${CLASS_NAME}(const ${CLASS_NAME}& src);

${CLASS_NAME}&  operator=(const ${CLASS_NAME}& rhs);

private:

};

#endif

EOF

cat > ${CLASS_NAME}.cpp << EOF

#include <iostream>
#include <map>
#include "${CLASS_NAME}.hpp"

${CLASS_NAME}::${CLASS_NAME}(){
}

${CLASS_NAME}::~${CLASS_NAME}() {   
}

${CLASS_NAME}::${CLASS_NAME}(const ${CLASS_NAME}& src){
    *this = src;
}

${CLASS_NAME}&  ${CLASS_NAME}::operator=(const ${CLASS_NAME}& rhs){
    (void)rhs;
    return *this;
}

EOF