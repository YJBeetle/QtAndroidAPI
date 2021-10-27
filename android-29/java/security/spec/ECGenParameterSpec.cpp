#include "./ECGenParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	
	ECGenParameterSpec::ECGenParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ECGenParameterSpec::ECGenParameterSpec(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECGenParameterSpec",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ECGenParameterSpec::ECGenParameterSpec(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECGenParameterSpec",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::security::spec

