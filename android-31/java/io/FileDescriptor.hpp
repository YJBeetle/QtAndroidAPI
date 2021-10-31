#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::io
{
	class FileDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static java::io::FileDescriptor err();
		static java::io::FileDescriptor in();
		static java::io::FileDescriptor out();
		
		// QJniObject forward
		template<typename ...Ts> explicit FileDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileDescriptor(QJniObject obj);
		
		// Constructors
		FileDescriptor();
		
		// Methods
		void sync();
		jboolean valid();
	};
} // namespace java::io

