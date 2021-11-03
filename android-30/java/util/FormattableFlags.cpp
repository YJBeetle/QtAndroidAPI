#include "./FormattableFlags.hpp"

namespace java::util
{
	// Fields
	jint FormattableFlags::ALTERNATE()
	{
		return getStaticField<jint>(
			"java.util.FormattableFlags",
			"ALTERNATE"
		);
	}
	jint FormattableFlags::LEFT_JUSTIFY()
	{
		return getStaticField<jint>(
			"java.util.FormattableFlags",
			"LEFT_JUSTIFY"
		);
	}
	jint FormattableFlags::UPPERCASE()
	{
		return getStaticField<jint>(
			"java.util.FormattableFlags",
			"UPPERCASE"
		);
	}
	
	// QJniObject forward
	FormattableFlags::FormattableFlags(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::util

