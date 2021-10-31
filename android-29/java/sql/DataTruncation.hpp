#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLWarning.hpp"


namespace java::sql
{
	class DataTruncation : public java::sql::SQLWarning
	{
	public:
		// Fields
		
		DataTruncation(QAndroidJniObject obj);
		// Constructors
		DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4);
		DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4, jthrowable arg5);
		DataTruncation() = default;
		
		// Methods
		jint getDataSize();
		jint getIndex();
		jboolean getParameter();
		jboolean getRead();
		jint getTransferSize();
	};
} // namespace java::sql

