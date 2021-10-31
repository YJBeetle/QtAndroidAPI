#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::nio::channels
{
	class FileChannel_MapMode : public __JniBaseClass
	{
	public:
		// Fields
		static java::nio::channels::FileChannel_MapMode PRIVATE();
		static java::nio::channels::FileChannel_MapMode READ_ONLY();
		static java::nio::channels::FileChannel_MapMode READ_WRITE();
		
		// QJniObject forward
		template<typename ...Ts> explicit FileChannel_MapMode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileChannel_MapMode(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace java::nio::channels

