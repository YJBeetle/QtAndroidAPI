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
		ConstrainedFieldPosition(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConstrainedFieldPosition();
		
		// Methods
		void constrainClass(JClass arg0) const;
		void constrainField(java::text::Format_Field arg0) const;
		java::text::Format_Field getField() const;
		JObject getFieldValue() const;
		jlong getInt64IterationContext() const;
		jint getLimit() const;
		jint getStart() const;
		jboolean matchesField(java::text::Format_Field arg0, JObject arg1) const;
		void reset() const;
		void setInt64IterationContext(jlong arg0) const;
		void setState(java::text::Format_Field arg0, JObject arg1, jint arg2, jint arg3) const;
		JString toString() const;
	};
} // namespace android::icu::text

