#ifndef __VERSION_COMMON_H__
#define __VERSION_COMMON_H__
#define		__VER	17	// 15차
#define __MAINSERVER
#if !defined( __TESTSERVER ) && !defined( __MAINSERVER )
	#define __INTERNALSERVER
#endif

#if __VER >= 16
#define __NEW_PROP_PARAMETER 
#define __3RD_LEGEND16 
#define __IMPROVE_MAP_SYSTEM
#define __INSTANCE_AGGRO_SYSTEM
#define __ITEM_LINK

#endif // __VER >= 16

#if __VER >= 17
#define __NEW_WEAPON_GLOW
#define __COLOSSEUM
#define __JOBCHANGER
#define __BAHARA_AGGRO_SYSTEM
#endif // __VER >= 17

#define		__SERVER				// 클라이언트 전용코드를 빌드하지 않기 위한 define

#define		__CRC
#define		__SO1014				// 소켓 예외 처리( 캐쉬, 인증, 로그인 )
#define		__PROTOCOL0910
#define		__PROTOCOL1021
#define		__VERIFYNETLIB
#define		__DOS1101
#define		__STL_0402		// stl

#if (_MSC_VER > 1200)
#define		__VS2003		// 컴파일러변경.net
#endif

// 15차
//	#define		__2ND_PASSWORD_SYSTEM			// 로그인 시 2차 비밀번호 입력

#if	  defined(__INTERNALSERVER)	// 내부 사무실 테스트서버 


#elif defined(__TESTSERVER)		// 외부 유저 테스트서버


#elif defined(__MAINSERVER)		// 외부 본섭

#endif	// end - 서버종류별 define 


#endif

