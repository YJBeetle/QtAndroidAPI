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
		
		// QJniObject forward
		template<typename ...Ts> explicit FileStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileStore(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAttribute(JString arg0) const;
		jlong getBlockSize() const;
		JObject getFileStoreAttributeView(JClass arg0) const;
		jlong getTotalSpace() const;
		jlong getUnallocatedSpace() const;
		jlong getUsableSpace() const;
		jboolean isReadOnly() const;
		JString name() const;
		jboolean supportsFileAttributeView(JClass arg0) const;
		jboolean supportsFileAttributeView(JString arg0) const;
		JString type() const;
	};
} // namespace java::nio::file

