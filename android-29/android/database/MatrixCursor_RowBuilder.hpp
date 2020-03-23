#pragma once

#ifndef ANDROID_DATABASE_MATRIXCURSOR_ROWBUILDER
#define ANDROID_DATABASE_MATRIXCURSOR_ROWBUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::database
{
	class MatrixCursor;
}

namespace __jni_impl::android::database
{
	class MatrixCursor_RowBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject add(jobject arg0);
		QAndroidJniObject add(jstring arg0, jobject arg1);
	};
} // namespace __jni_impl::android::database

#include "MatrixCursor.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void MatrixCursor_RowBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.MatrixCursor$RowBuilder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MatrixCursor_RowBuilder::add(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0);
	}
	QAndroidJniObject MatrixCursor_RowBuilder::add(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class MatrixCursor_RowBuilder : public __jni_impl::android::database::MatrixCursor_RowBuilder
	{
	public:
		MatrixCursor_RowBuilder(QAndroidJniObject obj) { __thiz = obj; }
		MatrixCursor_RowBuilder()
		{
			__constructor();
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_MATRIXCURSOR_ROWBUILDER

