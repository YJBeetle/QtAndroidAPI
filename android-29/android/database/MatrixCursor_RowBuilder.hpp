#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::database
{
	class MatrixCursor;
}

namespace android::database
{
	class MatrixCursor_RowBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		MatrixCursor_RowBuilder(QAndroidJniObject obj);
		// Constructors
		MatrixCursor_RowBuilder() = default;
		
		// Methods
		QAndroidJniObject add(jobject arg0);
		QAndroidJniObject add(jstring arg0, jobject arg1);
		QAndroidJniObject add(const QString &arg0, jobject arg1);
	};
} // namespace android::database

