#pragma once

#include "../../../JObject.hpp"

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
	class MessagePattern_Part : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessagePattern_Part(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern_Part(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		android::icu::text::MessagePattern_ArgType getArgType();
		jint getIndex();
		jint getLength();
		jint getLimit();
		android::icu::text::MessagePattern_Part_Type getType();
		jint getValue();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::text

