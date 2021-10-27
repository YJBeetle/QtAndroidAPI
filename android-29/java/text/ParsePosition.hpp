#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class ParsePosition : public __JniBaseClass
	{
	public:
		// Fields
		
		ParsePosition(QAndroidJniObject obj);
		// Constructors
		ParsePosition(jint &arg0);
		ParsePosition() = default;
		
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

