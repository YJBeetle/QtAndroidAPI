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
class JObject;
class JString;

namespace android::icu::text
{
	class MessagePattern_Part : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MessagePattern_Part(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern_Part(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		android::icu::text::MessagePattern_ArgType getArgType();
		jint getIndex();
		jint getLength();
		jint getLimit();
		android::icu::text::MessagePattern_Part_Type getType();
		jint getValue();
		jint hashCode();
		JString toString();
	};
} // namespace android::icu::text

