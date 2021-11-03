#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class DropBoxManager_Entry;
}
namespace java::io
{
	class File;
}
class JString;

namespace android::os
{
	class DropBoxManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_DROPBOX_ENTRY_ADDED();
		static JString EXTRA_TAG();
		static JString EXTRA_TIME();
		static jint IS_EMPTY();
		static jint IS_GZIPPED();
		static jint IS_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit DropBoxManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DropBoxManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addData(JString arg0, JByteArray arg1, jint arg2);
		void addFile(JString arg0, java::io::File arg1, jint arg2);
		void addText(JString arg0, JString arg1);
		android::os::DropBoxManager_Entry getNextEntry(JString arg0, jlong arg1);
		jboolean isTagEnabled(JString arg0);
	};
} // namespace android::os

