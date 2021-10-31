#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::text
{
	class Format_Field;
}

namespace android::icu::text
{
	class ConstrainedFieldPosition : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConstrainedFieldPosition(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConstrainedFieldPosition(QAndroidJniObject obj);
		
		// Constructors
		ConstrainedFieldPosition();
		
		// Methods
		void constrainClass(jclass arg0);
		void constrainField(java::text::Format_Field arg0);
		java::text::Format_Field getField();
		jobject getFieldValue();
		jlong getInt64IterationContext();
		jint getLimit();
		jint getStart();
		jboolean matchesField(java::text::Format_Field arg0, jobject arg1);
		void reset();
		void setInt64IterationContext(jlong arg0);
		void setState(java::text::Format_Field arg0, jobject arg1, jint arg2, jint arg3);
		jstring toString();
	};
} // namespace android::icu::text
