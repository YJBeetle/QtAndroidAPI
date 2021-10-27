#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::nio::charset
{
	class CodingErrorAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject IGNORE();
		static QAndroidJniObject REPLACE();
		static QAndroidJniObject REPORT();
		
		CodingErrorAction(QAndroidJniObject obj);
		// Constructors
		CodingErrorAction() = default;
		
		// Methods
		jstring toString();
	};
} // namespace java::nio::charset

