#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class CollationKey : public __JniBaseClass
	{
	public:
		// Fields
		
		CollationKey(QAndroidJniObject obj);
		// Constructors
		CollationKey() = default;
		
		// Methods
		jint compareTo(jobject arg0);
		jint compareTo(java::text::CollationKey arg0);
		jstring getSourceString();
		jbyteArray toByteArray();
	};
} // namespace java::text

