#pragma once

#include "../../JObject.hpp"


namespace java::io
{
	class FileDescriptor : public JObject
	{
	public:
		// Fields
		static java::io::FileDescriptor err();
		static java::io::FileDescriptor in();
		static java::io::FileDescriptor out();
		
		// QJniObject forward
		template<typename ...Ts> explicit FileDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileDescriptor(QJniObject obj);
		
		// Constructors
		FileDescriptor();
		
		// Methods
		void sync();
		jboolean valid();
	};
} // namespace java::io

