#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class MessagePattern_ArgType;
}
namespace android::icu::text
{
	class MessagePattern_Part_Type;
}

namespace android::icu::text
{
	class MessagePattern_Part : public __JniBaseClass
	{
	public:
		// Fields
		
		MessagePattern_Part(QAndroidJniObject obj);
		// Constructors
		MessagePattern_Part() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getArgType();
		jint getIndex();
		jint getLength();
		jint getLimit();
		QAndroidJniObject getType();
		jint getValue();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::text

