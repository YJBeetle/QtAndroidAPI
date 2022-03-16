#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class FileDescriptor;
}
class JString;

namespace android::app::backup
{
	class BackupDataInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupDataInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getDataSize() const;
		JString getKey() const;
		jint readEntityData(JByteArray arg0, jint arg1, jint arg2) const;
		jboolean readNextHeader() const;
		void skipEntityData() const;
	};
} // namespace android::app::backup

