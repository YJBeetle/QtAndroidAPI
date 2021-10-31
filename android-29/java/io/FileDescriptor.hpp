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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileDescriptor(QAndroidJniObject obj);
		
		// Constructors
		FileDescriptor();
		
		// Methods
		void sync();
		jboolean valid();
	};
} // namespace java::io

