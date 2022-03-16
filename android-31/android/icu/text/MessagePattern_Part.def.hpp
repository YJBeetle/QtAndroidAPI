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
		MessagePattern_Part(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::icu::text::MessagePattern_ArgType getArgType() const;
		jint getIndex() const;
		jint getLength() const;
		jint getLimit() const;
		android::icu::text::MessagePattern_Part_Type getType() const;
		jint getValue() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::icu::text

