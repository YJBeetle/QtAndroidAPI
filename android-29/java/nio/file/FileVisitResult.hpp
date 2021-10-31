#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class FileVisitResult : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONTINUE();
		static QAndroidJniObject SKIP_SIBLINGS();
		static QAndroidJniObject SKIP_SUBTREE();
		static QAndroidJniObject TERMINATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileVisitResult(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		FileVisitResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file

