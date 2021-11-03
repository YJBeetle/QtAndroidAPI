#pragma once

#include "../../../JObject.hpp"


namespace java::nio::file
{
	class FileStore : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileStore(QJniObject obj);
		
		// Constructors
		
		// Methods
		jobject getAttribute(jstring arg0);
		jlong getBlockSize();
		JObject getFileStoreAttributeView(jclass arg0);
		jlong getTotalSpace();
		jlong getUnallocatedSpace();
		jlong getUsableSpace();
		jboolean isReadOnly();
		jstring name();
		jboolean supportsFileAttributeView(jclass arg0);
		jboolean supportsFileAttributeView(jstring arg0);
		jstring type();
	};
} // namespace java::nio::file

