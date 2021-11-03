#pragma once

#include "../../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace java::nio::file
{
	class FileStore : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileStore(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAttribute(JString arg0);
		jlong getBlockSize();
		JObject getFileStoreAttributeView(JClass arg0);
		jlong getTotalSpace();
		jlong getUnallocatedSpace();
		jlong getUsableSpace();
		jboolean isReadOnly();
		JString name();
		jboolean supportsFileAttributeView(JClass arg0);
		jboolean supportsFileAttributeView(JString arg0);
		JString type();
	};
} // namespace java::nio::file

