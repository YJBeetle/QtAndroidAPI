#pragma once

#include "./File.def.hpp"
#include "./FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "./FileReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline FileReader::FileReader(java::io::File arg0)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline FileReader::FileReader(java::io::FileDescriptor arg0)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	inline FileReader::FileReader(JString arg0)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline FileReader::FileReader(java::io::File arg0, java::nio::charset::Charset arg1)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline FileReader::FileReader(JString arg0, java::nio::charset::Charset arg1)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "./Reader.hpp"
#include "./InputStreamReader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
