#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class AtomicMoveNotSupportedException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		AtomicMoveNotSupportedException(QAndroidJniObject obj);
		// Constructors
		AtomicMoveNotSupportedException(jstring &arg0, jstring &arg1, jstring &arg2);
		AtomicMoveNotSupportedException(const QString &arg0, const QString &arg1, const QString &arg2);
		AtomicMoveNotSupportedException() = default;
		
		// Methods
	};
} // namespace java::nio::file

