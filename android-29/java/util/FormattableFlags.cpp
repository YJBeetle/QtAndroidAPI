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
	
	// QAndroidJniObject forward
	FormattableFlags::FormattableFlags(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::util

