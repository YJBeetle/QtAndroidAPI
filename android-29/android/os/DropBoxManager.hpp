#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class DropBoxManager_Entry;
}
namespace java::io
{
	class File;
}

namespace android::os
{
	class DropBoxManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_DROPBOX_ENTRY_ADDED();
		static jstring EXTRA_DROPPED_COUNT();
		static jstring EXTRA_TAG();
		static jstring EXTRA_TIME();
		static jint IS_EMPTY();
		static jint IS_GZIPPED();
		static jint IS_TEXT();
		
		DropBoxManager(QAndroidJniObject obj);
		// Constructors
		DropBoxManager() = default;
		
		// Methods
		void addData(jstring arg0, jbyteArray arg1, jint arg2);
		void addData(const QString &arg0, jbyteArray arg1, jint arg2);
		void addFile(jstring arg0, java::io::File arg1, jint arg2);
		void addFile(const QString &arg0, java::io::File arg1, jint arg2);
		void addText(jstring arg0, jstring arg1);
		void addText(const QString &arg0, const QString &arg1);
		QAndroidJniObject getNextEntry(jstring arg0, jlong arg1);
		QAndroidJniObject getNextEntry(const QString &arg0, jlong arg1);
		jboolean isTagEnabled(jstring arg0);
		jboolean isTagEnabled(const QString &arg0);
	};
} // namespace android::os

