#pragma once

#include "../../../JObject.hpp"

class JClass;
class JObject;
class JString;
namespace java::text
{
	class Format_Field;
}

namespace android::icu::text
{
	class ConstrainedFieldPosition : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConstrainedFieldPosition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConstrainedFieldPosition(QJniObject obj);
		
		// Constructors
		ConstrainedFieldPosition();
		
		// Methods
		void constrainClass(JClass arg0);
		void constrainField(java::text::Format_Field arg0);
		java::text::Format_Field getField();
		JObject getFieldValue();
		jlong getInt64IterationContext();
		jint getLimit();
		jint getStart();
		jboolean matchesField(java::text::Format_Field arg0, JObject arg1);
		void reset();
		void setInt64IterationContext(jlong arg0);
		void setState(java::text::Format_Field arg0, JObject arg1, jint arg2, jint arg3);
		JString toString();
	};
} // namespace android::icu::text

