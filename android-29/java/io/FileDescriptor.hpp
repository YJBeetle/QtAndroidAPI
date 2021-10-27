#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::io
{
	class FileDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject err();
		static QAndroidJniObject in();
		static QAndroidJniObject out();
		
		FileDescriptor(QAndroidJniObject obj);
		// Constructors
		FileDescriptor();
		
		// Methods
		void sync();
		jboolean valid();
	};
} // namespace java::io

