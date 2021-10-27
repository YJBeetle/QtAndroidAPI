#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Character_Subset : public __JniBaseClass
	{
	public:
		// Fields
		
		Character_Subset(QAndroidJniObject obj);
		// Constructors
		Character_Subset() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::lang

