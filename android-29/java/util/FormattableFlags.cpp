#include "./FormattableFlags.hpp"

namespace java::util
{
	// Fields
	jint FormattableFlags::ALTERNATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.FormattableFlags",
			"ALTERNATE"
		);
	}
	jint FormattableFlags::LEFT_JUSTIFY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.FormattableFlags",
			"LEFT_JUSTIFY"
		);
	}
	jint FormattableFlags::UPPERCASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.FormattableFlags",
			"UPPERCASE"
		);
	}
	
	FormattableFlags::FormattableFlags(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace java::util

