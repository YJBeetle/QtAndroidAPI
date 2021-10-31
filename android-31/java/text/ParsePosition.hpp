#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class ParsePosition : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParsePosition(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ParsePosition(QAndroidJniObject obj);
		
		// Constructors
		ParsePosition(jint arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getErrorIndex();
		jint getIndex();
		jint hashCode();
		void setErrorIndex(jint arg0);
		void setIndex(jint arg0);
		jstring toString();
	};
} // namespace java::text

