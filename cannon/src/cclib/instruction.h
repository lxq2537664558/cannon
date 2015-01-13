#ifndef __INSTRUCTION_H__
#define __INSTRUCTION_H__

// instructions channel will receive
//
#define ITMT_NEW		0	// �½��ⲿ���ӣ�(id,tag) ip/d,port/w   <hid>
#define ITMT_LEAVE		1	// �Ͽ��ⲿ���ӣ�(id,tag)   		<hid>
#define ITMT_DATA		2	// �ⲿ���ݵ��(id,tag) data...	<hid>
		//GE_CHAT
		//GE_TIMER
		//...
#define ITMT_CHANNEL	3	// Ƶ��ͨ�ţ�(channel,tag)	<>
		//CH_RESULT
		//CH_EXIT	
#define ITMT_CHNEW		4	// Ƶ��������(channel,id)
#define ITMT_CHSTOP		5	// Ƶ���Ͽ���(channel,tag)

#define ITMT_SYSCD		6	// ϵͳ��Ϣ��(subtype, v) data...
#define ITMT_TIMER		7	// ϵͳʱ�ӣ�(timesec,timeusec)
#define ITMT_UNRDAT		10	// ���ɿ����ݰ���(id,tag)
#define ITMT_NOOP		80	// ��ָ�(wparam, lparam)


// instructions from channel to transmod 
//
#define ITMC_DATA		0	// �ⲿ���ݷ��ͣ�(id,*) data...
#define ITMC_CLOSE		1	// �ر��ⲿ���ӣ�(id,code)
#define ITMC_TAG		2	// ����TAG��(id,tag)
#define ITMC_CHANNEL	3	// ���ͨ�ţ�(channel,*) data...
#define ITMC_MOVEC		4	// �ƶ��ⲿ���ӣ�(channel,id) data...
#define ITMC_SYSCD		5	// ϵͳ������Ϣ��(subtype, v) data...
#define ITMC_BROADCAST  6	// �㲥
#define ITMC_UNRDAT		10	// ���ɿ����ݰ���(id,tag)
#define ITMC_IOCTL		11	// ���ӿ���ָ�(id,flag)
#define ITMC_SEED		12	// ���ü�������
#define ITMC_NOOP		80	// ��ָ�(*,*)


//the subinstrcutions for the ITMC_SYSINFO
#define ITMS_CONNC		0	// ������������(st,0) cu/d,cc/d
#define ITMS_LOGLV		1	// ������־����(st,level)
#define ITMS_LISTC		2	// ����Ƶ����Ϣ(st,cn) d[ch,id,tag],w[t,c]
#define ITMS_RTIME		3	// ϵͳ����ʱ��(st,wtime)
#define ITMS_TMVER		4	// ����ģ��汾(st,tmver)
#define ITMS_REHID		5	// ����Ƶ����(st,ch)
#define ITMS_QUITD		6	// �����Լ��˳�
#define ITMS_TIMER		8	// ����Ƶ�����ʱ��(st,timems)
#define ITMS_CHID		11	// ȡ���Լ���channel���(st, ch)
#define ITMS_BOOKADD	12	// ���Ӷ���
#define ITMS_BOOKDEL	13	// ȡ������
#define ITMS_BOOKRST	14	// ��ն���
#define ITMS_STATISTIC	15	// ͳ����Ϣ
#define ITMS_RC4SKEY	16	// ���÷���KEY (st, hid) key
#define ITMS_RC4RKEY	17	// ���ý���KEY (st, hid) key

#define ITMS_NODELAY	1	// ���ý���Nagle�㷨
#define ITMS_NOPUSH		2	// ��ֹ���ͽӿ�

//for log
#define ITML_BASE		0x01	// ��־���룺����
#define ITML_INFO		0x02	// ��־���룺��Ϣ
#define ITML_ERROR		0x04	// ��־���룺����
#define ITML_WARNING	0x08	// ��־���룺����
#define ITML_DATA		0x10	// ��־���룺����
#define ITML_CHANNEL	0x20	// ��־���룺Ƶ��
#define ITML_EVENT		0x40	// ��־���룺�¼�
#define ITML_LOST		0x80	// ��־���룺������¼

#endif

